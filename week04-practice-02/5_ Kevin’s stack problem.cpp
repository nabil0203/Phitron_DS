// https://www.naukri.com/code360/problems/kevin-s-stack-problem_1169465


#include <bits/stdc++.h>
string kevinStackProblem(string &s) {
  
  stack<char> st;
  for (char c : s)         // pushing each character of string into stack one by one
  {
    st.push(c);
  }
  
  string s2;                    // new string for storing the reverse
  while (!st.empty()) {         // stack to string
    s2 = s2 + st.top();
    st.pop();
  }

  return s2;
}
