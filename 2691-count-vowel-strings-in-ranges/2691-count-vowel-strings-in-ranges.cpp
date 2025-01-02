class Solution {
public:
    bool isVowel(string str) {

        vector<char> ch = {'a','e','i','o','u'};
        unordered_set<char> s;

        for(int i = 0; i < ch.size(); i++) {
            s.insert(ch[i]);
        }

        int last_index = str.size() - 1;
        bool flag = false;
        if(s.count(str[0]) > 0){
            if( s.count(str[last_index]) > 0) {
                flag =  true;
            }
        }
        return flag;
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> ans;
        vector<int> prefix;
        int cnt = 0;

        for(int i = 0 ; i < words.size(); i++) {
            if(isVowel(words[i]) == true ) {
                cnt++;
            }
            prefix.push_back(cnt);
        }
        
        for(auto query : queries) {
            int l = query[0];
            int r = query[1];

            if(l == 0) 
                ans.push_back(prefix[r]);
            else
                ans.push_back(prefix[r] - prefix[l-1]);
        }
        return ans;
    }
};