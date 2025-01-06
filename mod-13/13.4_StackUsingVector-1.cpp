#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    vector<int> v;                                      // stack

    void push(int val)
    {
        v.push_back(val);                               // stack push = insert value atlast of vector
    }

    void pop()
    {
        v.pop_back();                                   // stack pop = delete value from last of vector
    }

    
    int top()
    {
        return v.back();                                // top element of stack = last element of vector
    }

    int size()
    {
        return v.size();                                // size of stack = size of vector
    }

    bool empty()
    {
        return v.empty();                               // stack empty or not
    }


};

int main()
{

    return 0;
}