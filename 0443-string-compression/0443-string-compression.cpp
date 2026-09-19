class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int idx = 0;
        int i = 0;

        while (i < n) {
            char current = chars[i];
            int count = 0;

            // Count consecutive characters
            while (i < n && chars[i] == current) {
                i++;
                count++;
            }

            // Write the character
            chars[idx++] = current;

            // Write the count if greater than 1
            if (count > 1) {
                string s = to_string(count);

                for (char c : s) {
                    chars[idx++] = c;
                }
            }
        }

        return idx;
    }
};