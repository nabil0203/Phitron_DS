// create node as a Class
// each node has 1 value, 1 address

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;    // value
    Node *next; // storing the  address of next 'node'; same as the class name
};

int main()
{
    Node a, b, c;

    a.val = 10; // setting all value
    b.val = 20;
    c.val = 30;

    a.next = &b; // setting all address
    b.next = &c;
    c.next = NULL;

    cout << a.val << endl;                          //value a
    cout << a.next->val << endl;                    //value b
    cout << a.next->next->val << endl;              //value c
    return 0;
}