#include <iostream>
#include<vector>
#include<queue>
#include<unordered_map>
using namespace std;

struct Node {
	int dest, time;
};
typedef pair<int, int> ipair;

class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
		vector<vector<Node> >graph(n+1, vector<Node>());
		//unordered_map<int, Node> nodeMapping;

		for (auto i : times) {
			Node n = { i[1], i[2] };
			graph[i[0]].push_back(n);
		}

		vector<int> vis(n + 1, 0);
		vector<int> minTime(n + 1, INT_MAX);
		priority_queue<ipair, vector<ipair>, greater<ipair> > pq;
		pq.push({ 0, k });
		minTime[k] = 0;
		vis[0] = 1;
		minTime[0] = 0;
		while (!pq.empty()) {
			ipair top = pq.top();
			pq.pop();
			vis[top.second] = 1;
			for (auto i : graph[top.second]) {
				if (!vis[i.dest]) {
					pq.push({ i.time + top.first, i.dest });
					minTime[i.dest] = min(minTime[i.dest], top.first + i.time);
				}
			}
		}
		for (int i : vis)
			if (i == 0)
				return -1;
		int ans = INT_MIN;
		for (int i : minTime)
			ans = max(ans, i);
		return ans;
    }
};