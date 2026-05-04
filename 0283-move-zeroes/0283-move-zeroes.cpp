class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> res;
        int cnt = 0;

        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0)
                cnt++;
            if (nums[i] != 0)
                res.push_back(nums[i]);
        }
        for (int i = 0; i < cnt; i++) {
            res.push_back(0);
        }
        for(int i = 0; i <  res.size(); i++) {
            nums[i] = res[i];
        }
    }
};