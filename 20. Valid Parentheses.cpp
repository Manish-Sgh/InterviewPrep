#include <iostream>
#include<vector>
#include<queue>
#include<unordered_map>
#include<stack>
using namespace std;
typedef pair<int, int> ipair;


class Solution {
public:
	bool isValid(string s) {
        stack<char> stk;
        int n = s.length();  // base case // 
        if (n == 0)
            return true;
        if (n % 2 != 0)
            return false;

        for (int i = 0; i < s.length(); i++) {

            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                stk.push(s[i]);
            }

            else {
                if (!stk.empty() && ((stk.top() == '(' && s[i] == ')') || (stk.top() == '{' && s[i] == '}') ||  (stk.top() == '[' && s[i] == ']'))) {
                    stk.pop(); 
                }
                else {
                    return false; 
                }
            }
        }
        return stk.empty();
	}
};
   
int main()
{
	Solution obj;
	string s = "{()}[]";
	obj.isValid(s);

}
