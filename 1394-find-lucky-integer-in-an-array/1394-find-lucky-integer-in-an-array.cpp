class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;
        map<int, int> mpp;
        for(auto it : arr){
            mpp[it]++;
        }
        for(auto it : mpp){
            if(it.first == it.second){
                ans = max(ans, it.first);
            }
        }

        return (ans != 0) ? ans : -1;
    }
};