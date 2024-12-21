// https://www.hackerrank.com/contests/assignment-02-a-basic-data-structures-a-batch-06/challenges/get-difference


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
    tail = tail->next;
}

void differnce_calcualtion(Node *&head)
{

    Node *temp = head;

    // calculate max & min
    int maxx = INT_MIN;
    int mini = INT_MAX;
    while (temp != NULL)
    {
        if (temp->val > maxx)
        {
            maxx = temp->val;
        }
        if (temp->val < mini)
        {
            mini = temp->val;
        }
        temp = temp->next;
    }

    cout << maxx - mini;
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

        else
        {
            insert_at_tail(head, tail, val);
        }
    }

    differnce_calcualtion(head);

    return 0;
}