// check singly at first



#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;                                      // doubly

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;                             // doubly
    }
};

class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;

    int sizeeee = 0;

    void push(int val)
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
        newnode->prev = tail;                           // doubly
        tail = newnode;
    }

    void pop()
    {
        sizeeee--;

        Node *deletenode = head;

        head = head->next;

        delete deletenode;

        if (head == NULL)
        {
            tail = NULL;
            return;                                     // doubly
        }

        head->prev = NULL;                              // doubly
    }

    int front()
    {
        return head->val;
    }

    int back()
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
    myQueue q;

    int size;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    while (!q.empty())
    {
        cout << q.front() << endl;

        q.pop();
    }

    return 0;
}