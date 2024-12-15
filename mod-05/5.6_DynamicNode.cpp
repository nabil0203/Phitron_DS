#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    // a.next = &b;                                 // a is a object
    head->next = a;                                 // head is a pointer
    a->next = b;                                    // a is a pointer

    cout << head->val << endl;                      // (*head).val
    cout << head->next->val << endl;

    return 0;
}