class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        if(k == n) return *max_element(nums.begin(), nums.end());

        unordered_map<int, int> mpp;

        for(int i=0; i<=n-k; i++){
            for(int j=i;  j<i+k; j++){
                cout<<nums[j];
                mpp[nums[j]]++;
            }
            cout<<endl;
        }
        int ans = -1;
        for(auto it : mpp){
            cout<<it.second;
            if(it.second == 1){
                ans = max(ans, it.first);
            }
        }
        return ans;
    }
};