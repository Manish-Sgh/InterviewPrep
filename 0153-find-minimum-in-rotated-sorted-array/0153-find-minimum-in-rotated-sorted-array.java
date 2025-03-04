class Solution {
    public int findMin(int[] nums) {
        int min = nums[0];

        for(int i = 0; i < nums.length -1 ; i++) {
            if( nums[i] < nums[i+1]) {
                continue;
            }
            else {
                min  = nums[i+1];
            }
        }
        return min;
    }
}