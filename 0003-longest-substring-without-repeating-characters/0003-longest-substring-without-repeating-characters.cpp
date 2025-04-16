class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int size = s.length();
        int arr[256] = {0};
        int left = 0, right = 0;
        int max_len = 0;

        while (right < size) {
            arr[s[right]]++;
            while (arr[s[right]] > 1) {
                arr[s[left]]--;
                left++;
            }
            max_len = max(max_len, right - left + 1);
            right++;
        }
        return max_len;
    }
};