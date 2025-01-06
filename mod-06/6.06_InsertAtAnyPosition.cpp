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

void insert_at_any_position(Node *&head, int index, int val)
{
    Node *newnode = new Node(val);
    Node *temp = head;

    for (int i = 0; i < index - 1; i++)
    {
        temp = temp->next;
    }

    newnode->next = temp->next;                     // connection 1

    temp->next = newnode;                           // connection 2
}



void print_linked_list(Node *head)
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
    Node *b = new Node(30);

    head->next = a;
    a->next = b;

    insert_at_any_position(head, 2, 100);                           // headnode, position, value
    insert_at_any_position(head, 3, 500);                           // headnode, position, value

    print_linked_list(head);

    return 0;
}