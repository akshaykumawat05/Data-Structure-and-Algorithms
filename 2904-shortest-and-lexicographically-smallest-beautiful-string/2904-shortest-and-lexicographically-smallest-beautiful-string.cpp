class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.size();
        string ans = "";

        int left = 0, right = 0, ones = 0;
        while(right < n){
            if(s[right] == '1'){
                ones++;
            }
            while(ones > k || s[left] == '0'){
                if(s[left] == '1'){
                    ones--;
                }
                left++;
            }
            if(ones == k){
                string temp = s.substr(left, right - left + 1);
                if(ans.empty()
                || ans.size() > temp.size()
                || (ans.size() == temp.size() && temp < ans)){
                    ans = temp;
                }
            }
            right++;
        }

        return ans;
    }
};