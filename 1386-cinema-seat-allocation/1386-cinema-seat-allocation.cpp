class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        int ans = 2 * n;
        unordered_map<int, pair<bool,pair<bool, bool>>> mpp;

        for(int i=0; i<reservedSeats.size(); i++){
            int row = reservedSeats[i][0];
            int col = reservedSeats[i][1];

            if(col >= 2 && col <= 5) mpp[row].first = true;
            if(col >= 4 && col <= 7) mpp[row].second.first = true;
            if(col >= 6 && col <= 9) mpp[row].second.second = true;
        }

        for(auto it : mpp){
            bool l = it.second.first;
            bool m = it.second.second.first;
            bool r = it.second.second.second;

            if(l && m && r) ans -=2;
            else if(l || m || r) ans -= 1;
        }   

        return ans;
    }
};