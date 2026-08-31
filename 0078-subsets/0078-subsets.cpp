class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int subsets = 1 << n;
        vector<vector<int>> ans(subsets);

        for(int i=0; i<subsets; i++){
            for(int j=0; j<n; j++){
                if(i & (1 << j)){
                    ans[i].push_back(nums[j]);
                }
            }
        }

        return ans;
    }
};