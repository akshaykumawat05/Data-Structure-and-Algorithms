class Solution {
public:
    string getMinString(vector<int> &freq){
        string res;
        for(int i=0; i<26; i++){
            res.append(freq[i], 'a' + i);
        }

        return res;
    }
    string lexGreaterPermutation(string s, string target) {
        int n = s.size();
        vector<int> freq(26, 0);
        for(int i=0; i<n; i++){
            freq[s[i] - 'a']++;
            freq[target[i] - 'a']--;
        }

        for(int i=n-1; i>=0; i--){
            int b = target[i] - 'a';
            freq[b]++;

            if(*min_element(freq.begin(), freq.end()) < 0){
                continue;
            }

            for(int j = b+1; j<26; j++){
                if(freq[j]){
                    freq[j]--;
                    target[i] = 'a' + j;
                    target.resize(i + 1);
                    return target + getMinString(freq);
                }
            }
        }

        return "";
    }
};