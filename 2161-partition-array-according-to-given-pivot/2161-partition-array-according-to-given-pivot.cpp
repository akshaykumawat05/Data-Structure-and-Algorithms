class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int> ans;
        
        for(auto it : nums){
            if(it < pivot) ans.push_back(it);
        }
        for(auto it : nums){
            if(it == pivot) ans.push_back(it);
        }
        for(auto it : nums){
            if(it > pivot) ans.push_back(it);
        }

        return ans;
    }
};