class Solution {
    public int lengthOfLongestSubstring(String s) {
        int max_len = 0;
        int left  = 0, right = 0;
        int[] arr = new int[256];
        int res = 0;

        while(right < s.length()) {
            int curr = s.charAt(right);
            arr[curr]++;
            while(arr[curr] > 1) {
                arr[s.charAt(left)]--;
                left++;
            }
            res = Math.max(res, right - left + 1);
            right++;
        }
        return res;
    }
}