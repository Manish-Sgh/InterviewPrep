class Solution {
public:
    // TC - 0(N)
    // SC - 0(N)  to store answer 
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prod(nums.size(), 0);
        int total = 1 , numberOfZero = 0;
        int index = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                numberOfZero++;
                if (numberOfZero == 2) {
                    break;
                }
                index = i;
            } 
            else {
                total = total * nums[i];
            }
        }
        if (numberOfZero == 2) {     // 2 or more zeroes will result in zero only everytime // 
            return prod;
        }
        else if (numberOfZero == 1) {  // If exactly one zero, only the position with the zero gets the  
            prod[index] = total;       // product of all non-zero elements. 
            return prod; 
        }
        else {
            for (int i = 0; i < nums.size(); i++) {  // Compute the product of all elements and divide by the current 
                prod[i] = total / nums[i];          // element for every position. // 
            }
        }
        return prod;
    }
};