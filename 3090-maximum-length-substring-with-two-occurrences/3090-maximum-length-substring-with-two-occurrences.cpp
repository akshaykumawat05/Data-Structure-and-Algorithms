class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size();
        int left = 0, right = 0;
        int maxlen = 0;
        unordered_map<char, int> mpp;

        while(right < n){
            mpp[s[right]]++;
            while(mpp[s[right]] > 2){
                mpp[s[left++]]--;
            }
            maxlen = max(maxlen, right - left + 1);
            right++;
        }
        
        return maxlen;
    }
};