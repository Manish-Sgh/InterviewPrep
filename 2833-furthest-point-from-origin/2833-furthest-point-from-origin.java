class Solution {
    public int furthestDistanceFromOrigin(String moves) {
        int L_cnt = 0, R_cnt = 0, count_ = 0;

        for(int i = 0 ; i < moves.length(); i++) {
            if(moves.charAt(i) == 'L') 
                L_cnt++;
            else if(moves.charAt(i) == 'R') 
                R_cnt++;
            else 
                count_++;
        }

        return Math.abs(R_cnt - L_cnt) + count_;
    }
}