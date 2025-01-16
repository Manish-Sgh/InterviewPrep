class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int res = 0;

        if(n1 % 2 == 0 && n2 % 2 == 0)
            return 0;

        if (n1 % 2 != 0 && n2 % 2 != 0) {
            for (int i = 0; i < n1; i++) {
                res = res ^ nums1[i];
            }
            for (int i = 0; i < n2; i++) {
                res = res ^ nums2[i];
            }
        }
        if (n1 % 2 == 0 && n2 % 2 != 0) {
            for (int i = 0; i < n1; i++) {
                res = res ^ nums1[i];
            }
        }
        if (n1 % 2 != 0 && n2 % 2 == 0) {
            for (int i = 0; i < n2; i++) {
                res = res ^ nums2[i];
            }
        }
        return res;
    }
};