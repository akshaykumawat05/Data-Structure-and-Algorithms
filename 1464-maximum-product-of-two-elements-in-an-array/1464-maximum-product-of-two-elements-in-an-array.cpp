class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxi = 0;
        int second = 1;

        for(int i = 1; i < n; i++) {
            if(nums[i] > nums[maxi]) {
                second = maxi;
                maxi = i;
            }
            else if(nums[i] > nums[second]) {
                second = i;
            }
        }

        return (nums[maxi] - 1) * (nums[second] - 1);
    }
};