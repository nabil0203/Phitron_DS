// https://www.hackerrank.com/contests/assignment-02-a-basic-data-structures-a-batch-06/challenges/search-12

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

int search(Node *head, int s_val)
{
    Node *temp = head;

    int count = 0;
    while (temp != NULL)
    {
        if (s_val == temp->val)
        {
            return count;
        }
        temp = temp->next;
        count++;
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
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

        int s_val;
        cin >> s_val;
        int index = search(head, s_val);
        cout << index << endl;
    }

    return 0;
}