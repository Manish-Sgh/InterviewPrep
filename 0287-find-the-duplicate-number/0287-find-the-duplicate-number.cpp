class Solution {
public:
    // TC - 0(N)
    // SC - 0(N)
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        int duplicate = 0;
        
        for(int i =0; i<  n; i++) {
            mp[nums[i]]++;
        }

        for(int i =0; i < n ; i++) {
            if(mp[nums[i]] >= 2) {
                duplicate = nums[i];
                break; 
            }
        }
        return duplicate;
    }
};