#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)                                // construtor
    {
        this->val = val;
        this->next = NULL;
    }
};

int main()
{
    Node a(10), b(20), c(300);                        // passing value through constructor

    a.next = &b;                                     // a is a Static object
    b.next = &c;

    cout << a.val << endl;
    cout << a.next->val << endl;
    cout << a.next->next->val << endl;
    return 0;
}