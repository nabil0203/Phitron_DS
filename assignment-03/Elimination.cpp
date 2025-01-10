// https://www.hackerrank.com/contests/assignment-03-a-basic-data-structure-a-batch-06/challenges/elimination-2-2



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
            if (st.empty() || ch == st.top())
            {
                st.push(ch);
            }
            else
            {
                if (ch == '1' && st.top() == '0')                                   // all same as "is it valid" problem, just change here
                {
                    st.pop();
                }
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