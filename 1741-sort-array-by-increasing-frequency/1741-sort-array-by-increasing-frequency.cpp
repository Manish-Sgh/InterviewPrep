class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<int> res;
        unordered_map<int, int> umap;

        for(auto it : nums) {
            umap[it]++;
        }
        //lambda function //
        sort(nums.begin(), nums.end(), [&](int a , int b) 
        {return umap[a] != umap[b] ? umap[a] < umap[b] : a > b ; });

        return nums;
    }
};