// for inserting new element in linked list
// we have to insert in tail eveytime
// so optimise
// note book b-57

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

void insert_at_tail(Node *&head, Node *&tail, int val) // insert tail
{
    Node *newnode = new Node(val);

    // Node *temp = head;
    // while (temp->next != NULL)
    // {
    //     temp = temp->next;                   // dont need the loop, bcz we have tail
    // }

    tail->next = newnode;                           // changed
    tail = tail->next;                              // update tail to track the last element

}

void print_linked_list(Node *head)                  // print
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);                          // tail pointer; the last node

    head->next = a;
    a->next = tail;

    insert_at_tail(head, tail, 100);
    insert_at_tail(head, tail, 200);
    insert_at_tail(head, tail, 300);

    print_linked_list(head);



    return 0;
}