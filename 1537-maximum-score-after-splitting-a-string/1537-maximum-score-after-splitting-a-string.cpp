class Solution {
public:
    int maxScore(string s) {
        int countOnes = 0,countZeroes = 0;
        int maxScore = 0;

        for(int i = 0; i < s.length(); i++) {
            if( s[i] == '1') {
                countOnes++;
            }    
        }

        for(int i = 0; i < s.length() - 1; i++) {
            if(s[i] == '0') {
                countZeroes++;
            }
            else {
                countOnes--;
            }
            int score = countZeroes + countOnes;  
            maxScore = max(maxScore,score);   
        }  
        return maxScore;
    }
};