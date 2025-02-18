class Solution {
public:
    // TC - 0(N)
    // SC - 0(N)
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> umap;
        int n = nums.size();

        if(n < 2) {
            return {};
        }

        for(int i = 0; i < n ; i++) {
            if(umap.find(target - nums[i]) != umap.end()) {
                return {i, umap[target - nums[i]]};
            }
            umap[nums[i]] = i;
        }
        return {};
    }
};