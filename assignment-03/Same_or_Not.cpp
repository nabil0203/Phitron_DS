// https://www.hackerrank.com/contests/assignment-03-a-basic-data-structure-a-batch-06/challenges/same-or-not-ii

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    queue<int> q;
    for (int i = 0; i < m; i++)
    {
        int z;
        cin >> z;
        q.push(z);
    }

    if (n != m)
    {
        cout << "NO";
    }

    else
    {
        int flag = 0;
        while (!st.empty() && !q.empty())
        {
            if (st.top() == q.front())
            {
                st.pop();
                q.pop();
            }
            else
            {
                flag++;
                break;
            }
        }
        if (flag == 0)
            cout << "YES";
        else
            cout << "NO";
    }

    return 0;
}