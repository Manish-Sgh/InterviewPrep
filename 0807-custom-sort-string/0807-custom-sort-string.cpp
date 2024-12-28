class Solution {
public:
    string customSortString(string order, string s) {
        string res = "";
        map<char, int> map;

        for(char ch : s){
            map[ch]++;
        }

        for(char it : order) {
            while(map[it] > 0) {
                res += it;
                map[it]--;
            }
        }   

        for(auto it : map){
            while(map[it.first] > 0){
                res += it.first;
                map[it.first]--;
                //it.second--;
            }
        }
        return res;
    }
};