class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_set<int> s;
        vector<int> res;

        for(int i = 0; i< A.size(); i++) {
            s.insert(A[i]);
            int freq = 0;
            for(int j = 0; j <= i; j++) {
                if(s.find(B[j])!= s.end()) {
                    freq++;
                }
            }
            res.push_back(freq);
        }
        return res;
    }
};