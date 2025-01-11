class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.size() < k) {
            return false;
        }
        unordered_map<char, int> umap;
        int count_odd = 0;

        for(auto ch : s) {
            umap[ch]++;
        }
        for(auto [ch , freq] : umap) {
            if(freq%2 == 1) {
                count_odd++;
            }
        }
        return count_odd > k ? false : true;


    }
};