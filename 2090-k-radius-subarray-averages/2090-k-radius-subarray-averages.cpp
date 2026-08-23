class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        int window = 2*k + 1;
        vector<int> ans(n, -1);
        long long sum = 0;
        int left = 0, right = 0;
        while(right < n){
            sum += nums[right];
            int size = right - left + 1;
            if(size > window){
                sum -= nums[left++];
                size--;
            }
            if(size == window){
                ans[(left + right)/2] = sum/size;
            }
            right++;
        }

        return ans;
    }
};