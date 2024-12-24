#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;                             // prev used to store previous node's address

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;                  // prev used to store previous node's address
    }
};

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;                         // connection
    a->prev = head;                         // connection

    a->next = tail;                         // connection
    tail->prev = a;                         // connection

    return 0;
}