// https://www.hackerrank.com/contests/assignment-02-a-basic-data-structures-a-batch-06/challenges/same-to-same-1

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

// void compare(Node *&head, Node *&head1)
// {
//     Node *temp = head;
//     Node *temp1 = head1;

//     int count = 0;
//     while (temp != NULL)
//     {
//         temp = temp->next;
//         count++;
//     }

//     int count1 = 0;
//     while (temp1 != NULL)
//     {
//         temp1 = temp1->next;
//         count1++;
//     }

//     temp = head;   // Reset for another iteration
//     temp1 = head1;

//     if (count == count1)
//     {
//         int flag = 0;
//         while (temp != NULL)
//         {
//             if (temp->val == temp1->val)
//             {
//                 flag++;
//                 break;
//             }
//             temp = temp->next;
//             temp1 = temp1->next;
//         }

//         if (flag == 0)
//         {
//             cout << "NO";
//         }
//         else
//         {
//             cout << "YES";
//         }
//     }

//     else
//         cout << "NO";
// }





void compare(Node *&head, Node *&head1)
{
    Node *temp = head;
    Node *temp1 = head1;

    while (temp != NULL && temp1 != NULL)
    {
        if (temp->val != temp1->val)
        {
            cout << "NO";
            return;
            //break;
        }
        temp = temp->next;
        temp1 = temp1->next;
    }

    if (temp == NULL && temp1 == NULL)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *head_1 = NULL;
    Node *tail_1 = NULL;

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
    while (1)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        else
        {
            insert_at_tail(head_1, tail_1, val);
        }
    }

    compare(head, head_1);

    return 0;
}