class Solution {
public:
    bool countDigits(int num) {

        vector<int> sum;
        sum.push_back(0);

        while (num != 0) {
            int last = sum.back();
            sum.push_back(num % 10 + last);
            num = num / 10;
        }
        int size = sum.size() - 1;
        
        if(size%2 != 0 ) {
            return false;
        }
        if (sum[size / 2] == sum.back() - sum[size / 2]) {
            return true;
        }
        return false;
    }

    int countSymmetricIntegers(int low, int high) {
        int res = 0;
        for (int i = low; i <= high; i++) {
            if (countDigits(i)) {
                res++;
            }
        }
        return res;
    }
};