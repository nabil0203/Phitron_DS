// https://www.hackerrank.com/contests/mid-term-exam-a-basic-data-structures-a-batch-06/challenges/palindrome-26-2

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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }

    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

void palindrome(Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        cout << "NO";
        return;
    }

    int flag = 0;
    for (Node *i = head, *j = tail; i != j && i->prev != j; i = i->next, j = j->prev)
    {

        if (i->val != j->val)
        {
            flag++;
            break;
        }
    }

    if (flag == 0)
    {
        cout << "YES";
    }
    else
        cout << "NO";
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (1)
    {
        cin >> val;

        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    palindrome(head, tail);

    return 0;
}