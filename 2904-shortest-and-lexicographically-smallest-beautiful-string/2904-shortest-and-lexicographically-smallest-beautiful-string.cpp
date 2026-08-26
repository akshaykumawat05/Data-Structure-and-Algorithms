class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.size();
        string ans = "";

        for(int i=0; i<n; i++){
            int ones = 0;
            string temp;
            for(int j=i; j<n; j++){
                if(s[j] == '1'){
                    ones++;
                }
                temp += s[j];
                if(ones == k){
                    if(ans.empty()
                    || ans.size() > temp.size()
                    || (temp.size() == ans.size() && temp < ans)){
                        ans = temp;
                    }
                }
            }
        }

        return ans;
    }
};