class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // TC - 0(N)
        // SC - 0(N)
        unordered_map<int, int> umap;
        for (int i = 0; i < nums.size(); i++) {
            if (umap.find(target - nums[i]) != umap.end()) {
                return {i, umap[target - nums[i]]};
            }
            umap[nums[i]] = i;
        }
        return {};
    }
};