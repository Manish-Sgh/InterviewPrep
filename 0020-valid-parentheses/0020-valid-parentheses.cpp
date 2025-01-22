class Solution {
public:
    bool isValid(string s) 
    {
      int n = s.length();
      if( n == 0)      // base cases
        return true;

      if(n%2 != 0)
        return false;  //if odd then sol not possible  eg "()[{}"  or "([]{}"  or "({}" 
      
      stack<char> st;  //to keep order of the brackets

      for(int i = 0 ; i<n ; i++)
      {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]); //if element s[i] is an opening bracket, then  push it into the stack
        }
        else    //it means s[i] is a closing bracket , check conditions now
        {
          if(st.empty())    // stack is empty i.e no opening brackets were there in string 
            return false;      // so no valid parenthesis possible 
          
          else if((s[i] == ')' && st.top() != '(' ) || (s[i] == '}' &&  st.top() != '{' ) || (s[i] == ']' && st.top() != '['))
          {
            return false;   //current element doesn't matches with top of the stack 
          } 
          else
            st.pop();  // current element matches with top of stack
                          //it means right pair of brackets  "()" , "{}", so just pop it.
        }
      }
      return st.empty();  // check stack is empty after all operations or not, if empty then valid parenthesis possible hence true
     }
};