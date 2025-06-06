class Solution {
public:
    // TC - 0(N)
    // SC -0(1)
    // Don't use kadane's Algo(Max subarray) , wrong approach(-2, 3, -4) -> 24
    // use prefix suffix
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int prefix = 1;
        int suffix = 1;
        int maxProduct = INT_MIN;

        for (int i = 0; i < n; i++) {
            prefix = prefix * nums[i];
            maxProduct = max(maxProduct, prefix);
            if (prefix == 0) {
                prefix = 1;
            }
        }
        for (int i = n - 1; i >= 0; i--) {
            suffix = suffix * nums[i];
            maxProduct = max(maxProduct, suffix);
            if (suffix == 0) {
                suffix = 1;
            }
        }
        return maxProduct;
    }
};