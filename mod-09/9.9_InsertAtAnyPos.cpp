#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};


void print_forward(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}



void insert_at_any_position(Node *&head, int index, int val)
{
    Node *newnode = new Node(val);
    Node *temp  = head;
    for (int i = 0; i < index-1; i++)
    {
        temp = temp->next;
    }
    
    newnode->next = temp->next;                         // newnode with tail
    temp->next->prev = newnode;                         //  tail with newnode

    temp->next = newnode;
    newnode->prev = temp;

}


int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;

    insert_at_any_position(head,2, 88);
    print_forward(head);

    return 0;
}