class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int counter = 0;
        for(int i=1; i<n; i+=3){
            if(nums[i] != nums[i-1]){
                return nums[i-1];
            }
        }

        return nums[n-1];
    }
};