#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    vector<int> v;

    void push(int val)
    {
        v.push_back(val);
    }

    void pop()
    {
        v.pop_back();
    }

    int top()
    {
        return v.back();
    }

    bool empty()
    {
        return v.empty();
    }
};

int main()
{
    myStack st1, st2;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        st1.push(x);
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;

        st2.push(x);
    }

    if (n != m)
    {
        cout << "NO";
    }

    else
    {
        int flag = 0;
        while (!st1.empty() && !st2.empty())
        {
            if (st1.top() == st2.top())
            {
                st1.pop();
                st2.pop();
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