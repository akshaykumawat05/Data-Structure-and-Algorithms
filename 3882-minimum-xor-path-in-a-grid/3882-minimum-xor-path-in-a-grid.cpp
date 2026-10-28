class Solution {
public:
    int m, n;
    int func(int i, int j, int temp, vector<vector<int>> &grid, vector<vector<vector<int>>> &dp){
        if(i >= m || j >= n){
            return INT_MAX;
        }

        temp ^= grid[i][j];
        if(i == m-1 && j == n-1){
            return temp;
        }
        if(dp[i][j][temp] != -1) return dp[i][j][temp];
        int right = func(i, j + 1, temp, grid, dp);
        int down = func(i + 1, j, temp, grid, dp);

        return dp[i][j][temp] = min(right, down);
    }
    int minCost(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        vector<vector<vector<int>>> dp(m, vector<vector<int>>(n, vector<int>(1024, -1)));
        return func(0, 0, 0, grid, dp);
    }
};