// loop
// manual print


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
    Node *head = new Node(10);                      // creating dynamic nodes
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);



    head->next = a;                                 // making connection between nodes
    a->next = b;
    b->next = c;



    while (head!=NULL)
    {
        cout << head->val << endl;                      // printing in loop but not optiomised bcz we are moving head
        head = head->next;
    }
    



    return 0;
}