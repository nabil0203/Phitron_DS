#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    int st_size;
    cin >> st_size;
    for (int i = 0; i < st_size; i++)
    {
        int val;
        cin >> val;

        st.push(val);
    }

    queue<int> q;
    int q_size;
    cin >> q_size;
    for (int i = 0; i < q_size; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    if (st_size != q_size)
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