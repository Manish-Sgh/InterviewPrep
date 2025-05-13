class Solution {
public:
    int mod = 1e9+7; 
    // 1000000007
    int lengthAfterTransformations(string s, int t) {
        vector<long long> count(26, 0);

        for(int i = 0; i< s.length(); i++) {
            count[s[i] - 'a']++;
        } 

        for(int i = 0; i < t; i++) {
            vector<long long> temp(26, 0); 

            for(int j = 0; j < 26; j++) {
                if(j == 25 )  // z 
                {
                    temp[0] = (temp[0] + count[j])% mod;
                    temp[1] = (temp[1] + count[j])% mod;    
                }
                else {
                    temp[j+1] = (temp[j+1] + count[j])% mod; 
                }
            }
            count = temp;   
        }
        long long ans = 0;
        for(int i  = 0 ; i < count.size(); i++) {
            ans = (ans + count[i])%mod;
        }
        return ans;
    }
};