class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int n = word1.size(), m = word2.size();
        int i = 0, j = 0;

        while(i < n && j < m){
            ans = ans + word1[i++] + word2[j++];
        }
        while(i < n){
            ans += word1[i++];
        }
        while(j < m){
            ans += word2[j++];
        }

        return ans;
    }
};