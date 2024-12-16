/*----------------------------------

    Remember this codee MUSTTTTTTTT
    This is the way to create, connect & print --> Linked List

---------------------------------------*/

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



    Node *temp = head;                                          //putting head into temp

    while (temp!=NULL)                                          // printing
    {
        cout << temp->val << endl;
        temp = temp->next;                                     // moving pointer each time
    }
    

    return 0;
}