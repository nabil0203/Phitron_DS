// https://www.naukri.com/code360/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166


#include <bits/stdc++.h> 
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    stack<int>new_st;
    while(!myStack.empty())
    {
        new_st.push(myStack.top());
        myStack.pop();
    }

    new_st.push(x);

    while(!new_st.empty())
    {
        myStack.push(new_st.top());
        new_st.pop();
    }

    return myStack;
}
