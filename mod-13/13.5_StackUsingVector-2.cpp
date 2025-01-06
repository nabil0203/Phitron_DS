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

    int size()
    {
        return v.size();
    }

    bool empty()
    {
        return v.empty();
    }
};

int main()
{
    myStack a;                           // 'a'-static object of 'myStack' class


    a.push(10);                                 // inserting values in stack
    a.push(20);
    a.push(30);

    cout << a.top()<< endl;                      // 30

    a.pop();

    cout << a.top()<< endl;                     //20

    a.pop();

    cout << a.top()<< endl;                      //10

    a.pop();

    if (!a.empty())                             // if the stack is not empty then top will be shown
    {
        cout<< a.top();
    }

    if (!a.empty())                              // if the stack is not empty then top will be pop & the stack will be empty
    {
        a.pop();
    }
    
    


    return 0;
}