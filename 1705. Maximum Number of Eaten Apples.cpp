#include <iostream>
#include<vector>
#include<queue>
#include<unordered_map>
using namespace std;
typedef pair<int, int> ipair;


class Solution {
public:
	int eatenApples(vector<int>& apples, vector<int>& days) {
		priority_queue<ipair, vector<ipair>, greater<ipair>> pq;   //  pq min heap // 
		int day = 0, count = 0;

		while (!pq.empty() || day < apples.size()) {
			if (day < apples.size() && apples[day] > 0) {
				pq.push({ days[day] + day, apples[day] });
			}
			while(!pq.empty()) {
				ipair top = pq.top();
				pq.pop();
				if (day < top.first) {
					count++;
					if (top.second - 1 > 0) {
						pq.push({ top.first, top.second - 1 });
					}
					break;
				}
			}
			day++;
			
		}
		return count;
	}
};

int main()
{
	Solution obj;

	vector<int> apples = { 1,2,3,5,2 };
	vector<int>days = { 3,2,1,4,2 };
	obj.eatenApples(apples, days);

}