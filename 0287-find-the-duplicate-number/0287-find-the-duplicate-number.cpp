class Solution {
public:
    // TC -  0(1) 
    // SC - 0(n)
    int findDuplicate(vector<int>& nums) { 
    int duplicate = -1;
    unordered_set<int> s;

    for (int i = 0; i < nums.size(); i++) {
        if (s.find(nums[i]) != s.end())  {
            duplicate = nums[i];
        }
        s.insert(nums[i]);
    }
    return duplicate;
    }
};