class Solution {
public:
    int countPalindromicSubsequence(string s) {
	map<char, vector<int>> mp;

	for (int i = 0; i < s.size(); i++) {
		mp[s[i]].push_back(i);
	}
	int uniqueSubsequence = 0;
	for (auto it : mp) {
		vector<int> index = it.second;
		int l_index = index[0];
		int r_index = index[index.size() - 1];

		//first and the last occurence are at a distance > 1 , then unique 3 size subsequence possible //
		if (r_index - l_index > 1) {  
			unordered_set<int> unique_char;
			for (int i = l_index + 1; i < r_index; i++) {
				unique_char.insert(s[i]);
			}
			uniqueSubsequence = uniqueSubsequence + unique_char.size();
		}
	}
	return uniqueSubsequence;
}
};