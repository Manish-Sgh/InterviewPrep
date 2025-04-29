class Solution {
    public boolean isPalindrome(String s) {
        int n = s.length();
        int low = 0, high = n-1;

       while(low < high) {
            while(low < high && !Character.isLetterOrDigit(s.charAt(low))) {
                low++;
            }
            while(low < high && !Character.isLetterOrDigit(s.charAt(high))) {
                high--;
            }
            if(Character.toLowerCase(s.charAt(low))  != Character.toLowerCase(s.charAt(high))) {
                return false;
            }
            low++;
            high--;
        }
        return true;
    }
}