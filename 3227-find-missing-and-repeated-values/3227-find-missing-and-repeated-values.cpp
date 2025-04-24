class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int,int> umap;

        for(int i = 0 ; i< grid[0].size(); i++) {
            for(int j = 0; j < grid.size(); j++) {
                umap[grid[i][j]]++;
            } 
        }
        int n = grid.size();
        int repeat = 0;
        int missing = 0;

        for(int i = 1; i <= n*n ; i++ ) {
            if(umap[i] == 2) 
                repeat = i;
            if(umap[i] == 0) 
                missing = i;
        }
        return {repeat, missing};
    }
};