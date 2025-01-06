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

    int sizeee = 0;

    void push(int val)
    {
        sizeee++;

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

    void pop()
    {
        sizeee--;

        Node *deletenode = head;

        head = head->next;
        delete deletenode;

        if (head == NULL)
        {
            tail = NULL;
        }
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
        return sizeee;
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

    for (int i = 0; i < size; i++)                          // input
    {
        int val;
        cin >> val;
        q.push(val);
    }



    while (!q.empty())                                      // output
    {
        cout << q.front() << endl;

        q.pop();
    }

    return 0;
}