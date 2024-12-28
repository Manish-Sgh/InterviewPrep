class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
	vector<vector<string>> res;
	unordered_map<string, vector<string>> umap;

	for (auto it : strs) {
		string originalString = it;
		sort(it.begin(), it.end());
		umap[it].push_back(originalString);
	}

	for (auto it : umap) {
		vector<string> temp = it.second;
		res.push_back(temp);
	}
	return res;
  }
};