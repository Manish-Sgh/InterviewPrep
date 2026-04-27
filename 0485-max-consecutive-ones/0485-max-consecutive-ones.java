class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int global_max = 0;
        int curr_max = 0;

        if(nums.length == 1 && nums[0] == 0) {
            global_max = 0;
        }

        for(int i = 0 ; i < nums.length; i++) {
            if(nums[i] == 1) {
                curr_max++;
            }
            else {
                curr_max = 0;
            }
            global_max = Math.max(global_max, curr_max);
        }

        return global_max;
    }
}