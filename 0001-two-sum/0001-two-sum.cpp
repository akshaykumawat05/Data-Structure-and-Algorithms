class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> mpp;

        for(int i=0; i<n; i++){
            int t = target - nums[i];
            if(mpp.find(t) != mpp.end()){
                return {i, mpp[t]};
            }
            else{
                mpp[nums[i]] = i;
            }
        }

        return {};
    }
};