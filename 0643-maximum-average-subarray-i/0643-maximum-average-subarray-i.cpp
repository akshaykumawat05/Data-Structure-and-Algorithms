class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int i=0, j=0;
        double avg = INT_MIN;
        double sum = 0;

        while(j < n){
            sum += nums[j];
            int size = j - i + 1;
            if(size  == k){
                if(avg < sum/k){
                    avg = sum/k;
                }
                sum -= nums[i++];
            }
            j++;
        }
        return avg;
    }
};