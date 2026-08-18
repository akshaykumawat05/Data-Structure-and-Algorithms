class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size();
        int left = 0;
        int maxlen = 0;
        vector<int> freq(26);

        for(int i=0; i<n; i++){
            freq[s[i] - 'a']++;

            while(freq[s[i] - 'a'] > 2){
                freq[s[left++] - 'a']--;
            }
            maxlen = max(maxlen, i - left + 1);
        } 

        return maxlen;
    }
};