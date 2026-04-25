class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int count_L = 0;
        int count_R = 0;
        int count_space = 0;
        int n = moves.size();

        for (int i = 0; i < n; i++) {
            if (moves[i] == 'L')
                count_L++;
            else if (moves[i] == 'R')
                count_R++;
            else
                count_space++;
        }

        int dist = 0;

        if (count_L == count_R)
            dist = -1 * count_L + 1 * count_R + count_space;
        else if (count_L > count_R)
            dist = count_L + count_space - count_R;
        else
            dist = count_R + count_space - count_L;

        return dist;
    }
};