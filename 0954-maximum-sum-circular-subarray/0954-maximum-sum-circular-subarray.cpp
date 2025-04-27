class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int local_max = nums[0];
        int global_max = nums[0];
        int local_min = nums[0];
        int global_min = nums[0];
        int total_sum = nums[0];

        for(int  i = 1; i < nums.size(); i++ ) {
            local_max = max(nums[i], local_max + nums[i]);
            global_max = max(global_max, local_max);

            local_min = min(nums[i], local_min + nums[i]);
            global_min = min(global_min, local_min);

            total_sum += nums[i];
        }
        if(total_sum == global_min) { // Check if all elements in the array are negative
            return global_max;
        } else { // Otherwise, return the maximum between the maximum subarray sum and the difference between the total sum and the minimum subarray sum
            return max(global_max, total_sum - global_min);
        }
    }
};