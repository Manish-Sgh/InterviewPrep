class Solution {
public:
    const int MOD = 1e9 + 7;
    int recur(int size,int low,int high,int zero,int one,vector<int> &dp)
    {
        if(size > high)
        {
            return 0;
        }
        if(dp[size] != -1)
        {
            return dp[size];
        }
        int count = 0;
        if(size >= low && size <= high)
        {
            count++;
        }
        count = (count + recur(size + zero,low,high,zero,one,dp)) % MOD;
        count = (count + recur(size + one,low,high,zero,one,dp)) % MOD;

        return dp[size] = count % MOD;
    }

    int countGoodStrings(int low, int high, int zero, int one) {
        vector<int> dp(high + 1,-1);
        return recur(0,low,high,zero,one,dp);
    }
};