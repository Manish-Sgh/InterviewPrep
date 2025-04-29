class Solution {
    public int maximumDifference(int[] nums) {
        int max_diff = -1;
        int minimum_ele_so_far = Integer.MAX_VALUE ;
        int size = nums.length;

        for(int i = 0; i < size; i++) {
            minimum_ele_so_far = Math.min(minimum_ele_so_far,nums[i]);
            max_diff = Math.max(max_diff, nums[i] - minimum_ele_so_far);
        }
       
        return max_diff == 0 ? -1 : max_diff;
    }
}