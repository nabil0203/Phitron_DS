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

void delete_at_any_position(Node *&head, int index)
{
    Node *temp = head;
    for (int i = 0; i < index-1; i++)
    {
        temp = temp->next;                              // temp moving till the previous node of the deleting node
    }

    Node *deleteNode = temp->next;                      //new node for delete

    temp->next = temp->next->next;                      // connection between the temp node and the after node of deleting node
    temp->next->prev = temp;                            // connection between the after node of deleting node and temp node
    
    delete deleteNode;
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

    delete_at_any_position(head,1);
    print_forward(head);

    return 0;
}