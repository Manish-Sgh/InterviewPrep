class Solution {
public:
// 3*O(N) 
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int index = -1;
        for (int i = n - 2; i >= 0; i--) { // find dip first value from back which is smaller than i+1
            if (nums[i] < nums[i + 1]) {
                index = i;
                break;
            }
        }
        //If no such element is found, reverse the entire array
        if (index == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }
        for (int i = n - 1; i > index ; i--) { // slighter bigger value than arr[index] from back //
            if (nums[index] < nums[i]) {
                swap(nums[index], nums[i]);
                break;
            }
        }
        // reverse right side array for lexiographically next permutation //
        reverse(nums.begin() + index + 1, nums.end());
    }
};