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

class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;

    int sizeeee = 0;                             // used for count size



    void push(int val)                           // queue push = singly insert at tail
    {
        sizeeee++;

        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        tail = newnode;
    }



    void pop()                           // queue pop = singly delete at head
    {
        sizeeee--;

        Node *deletenode = head;

        head = head->next;
        delete deletenode;

        if (head == NULL)
        {
            tail = NULL;
        }
    }



    int front()                          // queue front = head of singly
    {
        return head->val;
    }



    int back()                           // queue front = tail of singly
    {
        return tail->val;
    }



    int size()
    {
        return sizeeee;
    }



    bool empty()
    {
        return head == NULL;
    }
};




int main()
{

    //next

    return 0;
}