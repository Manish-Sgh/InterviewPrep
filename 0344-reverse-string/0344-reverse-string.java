class Solution {
    void reverse_solve(char[] s, int low, int high) {
        if(low > high) {
            return;
        }
        char temp =  s[low];
        s[low] = s[high] ;
        s[high] = temp;

        reverse_solve(s, low+1, high -1);
    }
    public void reverseString(char[] s) {
        reverse_solve(s, 0, s.length-1);
    }
}