class Solution {
    public int majorityElement(int[] nums) {
        int n = nums.length;
        int res = 0;
        Map<Integer, Integer> map = new HashMap<>();

        for(int i = 0; i< n; i++) {
            if(map.containsKey(nums[i])) {
                map.put(nums[i],map.get(nums[i]) + 1);
            }else {
                map.put(nums[i], 1);
            }
            if(map.get(nums[i]) > n/2) {
                res = nums[i];
                break;
            }
        }
        return res;
    }
}