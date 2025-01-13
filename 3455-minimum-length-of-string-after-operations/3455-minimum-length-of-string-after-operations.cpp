class Solution {
public:
    int minimumLength(string s) {
        unordered_map<char, int> ump_freq;
        int min_length = 0;
        for (auto it : s) {
            ump_freq[it]++;
        }
        for (int i = 0; i < ump_freq.size(); i++) {
            if (ump_freq[i] > 2) {
                if (ump_freq[i] % 2 == 0) {
                    min_length += 2;
                }
                if (ump_freq[i] % 2 == 1) {
                    min_length += 1;
                }
            } else {
                min_length += ump_freq[i];
            }
        }
        return min_length;
    }
};