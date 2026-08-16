class Solution {
public:
    vector<int>sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int left = 0, right = n-1;
        vector<int> ans(n);
        int pointer = n-1;

        while(left <= right){
            if(abs(nums[left]) > abs(nums[right])){
                ans[pointer] = nums[left] * nums[left];
                left++;
            }
            else{
                ans[pointer] = nums[right] * nums[right];
                right--;
            }
            pointer--;
        }
        return ans;
    }
};

