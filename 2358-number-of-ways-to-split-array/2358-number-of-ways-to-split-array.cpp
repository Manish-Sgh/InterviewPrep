class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int numberOfWays = 0;

        vector<long long int> a1(nums.size());
        vector<long long int> a2(nums.size());

        long int sum1 =  nums[0];
        a1[0] = nums[0];
        for (int i = 1; i < nums.size() - 1; i++) {
            a1[i] = nums[i] + sum1;
            sum1 = a1[i];
        }

        long int sum2 = nums[nums.size()-1];
        a2[nums.size()- 1] = nums[nums.size()-1];
        for (int i = nums.size() - 2; i > 0; i--) {
            a2[i] = nums[i] + sum2;
            sum2 = a2[i];
        }

        for (int i = 0; i < a1.size() - 1; i++) {
            if (a1[i] >= a2[i + 1]) {
                numberOfWays++;
            }
        }
        return numberOfWays;
    }
};