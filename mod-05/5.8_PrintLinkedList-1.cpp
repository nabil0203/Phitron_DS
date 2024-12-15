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
    Node *head = new Node(10);                      // creating nodes
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);



    head->next = a;                                 // making connection between nodes
    a->next = b;
    b->next = c;




    cout << head->val << endl;                      // printing
    cout << head->next->val << endl;
    cout << head->next->next->val << endl;
    cout << head->next->next->next->val << endl;



    return 0;
}