#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    vector<int> v;                              // stack

    void push(int val)
    {
        v.push_back(val);                       // insert value at top of stack = insert value atlast of vector
    }

    void pop()
    {
        v.pop_back();                           // delete value from top of stack = delete value from last of vector
    }

    
    int top()
    {
        return v.back();                        // show top element of stack = show last element of vector
    }

    int size()
    {
        return v.size();                        // show size of stack = show size of vector
    }

    bool empty()
    {
        return v.empty();
    }


};

int main()
{

    return 0;
}