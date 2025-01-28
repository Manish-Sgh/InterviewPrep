class Solution {
public:
    // TC - 0(N)
    // SC - 0(1)
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int local_Max = nums[0];
        int global_Max = nums[0];

        for (int i = 1; i < n; i++) {
            local_Max = max(local_Max + nums[i], nums[i]);
            global_Max = max(global_Max, local_Max);
        }
        return global_Max;
    }
};