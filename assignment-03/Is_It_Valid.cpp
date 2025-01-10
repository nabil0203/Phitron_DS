// https://www.hackerrank.com/contests/assignment-03-a-basic-data-structure-a-batch-06/challenges/is-it-valid-1-1/problem


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        stack<char> st;

        for (char ch : s)
        {
            if (st.empty() || ch == st.top())                               // checking empty or (top & char) are same
            {
                st.push(ch);
            }
            else
            {
                // if ((ch == '0' && st.top() == '1') || (ch = '1' && st.top() == '0'))
                // {
                    st.pop();
                // }
            }
        }

        if (st.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}