class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mpp;

        for(auto it : nums){
            mpp[it]++;
        }
        int i = 1;
        while(true){
            if(mpp.count(i * k) != true) return i * k;
            i++;
        }

        return 0;
    }
};