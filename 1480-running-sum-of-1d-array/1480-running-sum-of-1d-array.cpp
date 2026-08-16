class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        int sum = nums[0];
        for(int i=1; i<n; i++){
            nums[i] += sum;
            sum = nums[i];
        }

        return nums;
    }
};