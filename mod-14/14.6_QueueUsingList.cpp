#include <bits/stdc++.h>
using namespace std;

class myQueue
{
public:
    list<int> l;                                      // list taken

    void push(int val)                                // stack push = insert value atlast of list
    {
        l.push_back(val);
    }

    void pop()                                      // stack pop = delete value from 1st of list
    {
        l.pop_front();
    }

    int front()                                     // stack 1st value = list front value
    {
        return l.front();
    }

    int back()                                      // stack last value = list last value
    {
        return l.back();
    }

    int size()                                       // stack size = list size
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
    myQueue q;

    int size;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    while (!q.empty())
    {
        cout << q.front() << endl;

        q.pop();
    }

    return 0;
}