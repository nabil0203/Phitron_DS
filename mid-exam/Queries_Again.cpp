// https://www.hackerrank.com/contests/mid-term-exam-a-basic-data-structures-a-batch-06/challenges/queries-again-1

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

void print_font(Node *head)
{
    Node *temp = head;
    cout << "L -> ";
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_back(Node *tail)
{
    Node *temp = tail;
    cout << "R -> ";
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

int size(Node *head)
{
    int flag = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        flag++;
        temp = temp->next;
    }
    return flag;
}

void insert_at_any_position(Node *&head, Node *&tail, int index, int val)
{
    int sz = size(head);
    if (index > sz)
    {
        cout << "Invalid" << endl;
        return;
    }
    if (index == 0)
    {
        insert_at_head(head, tail, val);
        return;
    }
    if (index == sz)
    {
        insert_at_tail(head, tail, val);
        return;
    }
    Node *newnode = new Node(val);
    Node *temp = head;
    for (int i = 0; i < index - 1; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next->prev = newnode;
    temp->next = newnode;
    newnode->prev = temp;
}

int main()
{
    int q;
    cin >> q;
    Node *head = NULL;
    Node *tail = NULL;

    while (q--)
    {
        int a, b;
        cin >> a >> b;
        insert_at_any_position(head, tail, a, b);

        if (a >= 0 && a < size(head))
        {
            print_font(head);
            print_back(tail);
        }
    }

    return 0;
}