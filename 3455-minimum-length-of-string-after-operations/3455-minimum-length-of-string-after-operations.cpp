class Solution {
public:
    // TC - O(n) + 0(26)
    // Sc - 0(26)
    void toLowerCase(string& s) {
        for (char& c : s) {
            if (c >= 'A' && c <= 'Z') {
                c += 32;
            }
        }
    }

    int minimumLength(string s) {

        int n = s.length();

        // toLowerCase(s);

        int min_val = 0;
        int freq[26] = {0};
        for (int i = 0; i < n; i++) {
            freq[s[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            if (freq[i] > 2) {
                if (freq[i] % 2 == 0) {
                    min_val += 2;
                } else {
                    min_val += 1;
                }
            } else {
                min_val += freq[i];
            }
        }
        return min_val;
    }
};