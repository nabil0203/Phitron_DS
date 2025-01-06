#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    list<int> l;                            // just took a list, others are same

    void push(int val)
    {
        l.push_back(val);
    }

    void pop()
    {
        l.pop_back();
    }

    int top()
    {
        return l.back();
    }

    int size()
    {
        return l.size();
    }

    bool empty()
    {
        return l.empty();
    }
};

int main()
{
    myStack a;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push(x);
    }

    while (!a.empty())
    {
        cout << a.top() << endl;

        a.pop();
    }

    return 0;
}