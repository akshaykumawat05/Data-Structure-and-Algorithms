class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        int count = 0;
        int left = 0, right = 0;
        int sum = 0;
        while(right < n){
            sum += arr[right];
            int size = right - left + 1;
            if(size > k){
                sum -= arr[left++];
                size--;
            }
            if(size == k && sum/size >= threshold){
                count++;
            }
            right++;
        }

        return count;
    }
};