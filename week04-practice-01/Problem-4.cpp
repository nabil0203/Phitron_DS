#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q1;
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        q1.push(x);
    }


    // coping queue into a stack
    stack<int> st;
    while (!q1.empty())
    {
        st.push(q1.front());
        q1.pop();
    }


    // coping stack into the queue
    while (!st.empty())
    {
        q1.push(st.top());
        st.pop();
    }


    //printing queue
    while (!q1.empty())
    {
        cout << q1.front() << " ";
        q1.pop();
    }

    return 0;
}