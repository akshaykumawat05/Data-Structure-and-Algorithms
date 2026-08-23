class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int left = 0, right = 0;
        int mini = INT_MAX, sum = 0;

        while(right < n){
            sum += nums[right];
            while(sum >= target){
                mini = min(mini, right - left + 1);
                sum -= nums[left++];
            }
            right++;

        }
        if(mini == INT_MAX) return 0;
        return mini;
    }
};