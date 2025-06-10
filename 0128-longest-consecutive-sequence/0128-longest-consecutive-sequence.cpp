class Solution {
public:
    // Time Complexity --> O(n logn) // where n is the size of the array and
    // since we are using sorting Space Complexity --> O(1)
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if (n == 0)
            return 0;

        sort(nums.begin(), nums.end());
        int currLen = 1;
        int maxLen = 0;

        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1]) {
                continue;
            } else {
                if (nums[i] - nums[i - 1] == 1) {
                    currLen++;
                } else if (nums[i] - nums[i - 1] != 1) {
                    maxLen = max(maxLen, currLen);
                    currLen = 1;
                }
            }
        }

        maxLen = max(maxLen, currLen);
        return maxLen;
    }
};