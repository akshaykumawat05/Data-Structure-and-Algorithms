class Solution {
public:
    int maxDepth(string s) {
        int n = s.size();
        int left = 0, right = 0, ans = 0;
        for(int i=0; i<n; i++){
            if(s[i] == '('){
                left++;
            }
            else if(s[i] == ')'){
                left--;
            }
            ans = max(ans, left);
        }

        return ans;
    }
};