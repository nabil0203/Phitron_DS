// https://www.hackerrank.com/contests/mid-term-exam-a-basic-data-structures-a-batch-06/challenges/remember-previous-queries

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;

    list<int> l;

    while (q--)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            l.push_front(v);
        }

        if (x == 1)
        {
            l.push_back(v);
        }

        if (x == 2)
        {
            if (!l.empty() && v == 0)
            {
                l.pop_front();
            }
            else if (!l.empty() && v > 0 && v < l.size())
            {
                auto IT = next(l.begin(), v);
                l.erase(IT);
            }
        }


        cout << "L -> ";
        for (int val : l)
        {
            cout << val << " ";
        }
        cout << endl;



        cout << "R -> ";
        for (auto IT = l.rbegin(); IT != l.rend(); ++IT)
        {
            cout << *IT << " ";
        }
        cout << endl;

    }

    return 0;
}

// #include <bITs/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node *prev;

//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// };

// void print_forward(Node *head)
// {
//     Node *temp = head;
//     cout << "L -> ";
//     while (temp != NULL)
//     {
//         cout << temp->val << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// void print_backward(Node *tail)
// {
//     Node *temp = tail;
//     cout << "R -> ";
//     while (temp != NULL)
//     {
//         cout << temp->val << " ";
//         temp = temp->prev;
//     }
//     cout << endl;
// }

// void insert_at_head(Node *&head, Node *&tail, int val)
// {
//     Node *newnode = new Node(val);
//     if (head == NULL)
//     {
//         head = newnode;
//         tail = newnode;
//         return;
//     }
//     newnode->next = head;
//     head->prev = newnode;
//     head = newnode;
// }

// void insert_at_tail(Node *&head, Node *&tail, int val)
// {
//     Node *newnode = new Node(val);
//     if (head == NULL)
//     {
//         head = newnode;
//         tail = newnode;
//         return;
//     }
//     tail->next = newnode;
//     newnode->prev = tail;
//     tail = newnode;
// }

// void delete_at_any_pos(Node *&head, Node *&tail, int index)
// {
//     if (head == NULL)
//     {
//         return;
//     }
//     if (index == 0)
//     {
//         Node *deleteNode = head;
//         head = head->next;
//         if (head != NULL)
//         {
//             head->prev = NULL;
//         }
//         else
//         {
//             tail = NULL;
//         }
//         delete deleteNode;
//         return;
//     }
//     Node *temp = head;
//     for (int i = 0; i < index && temp != NULL; i++)
//     {
//         temp = temp->next;
//     }
//     if (temp == NULL)
//     {
//         return;
//     }
//     if (temp->next == NULL)
//     {
//         tail = temp->prev;
//         tail->next = NULL;
//     }
//     else
//     {
//         temp->prev->next = temp->next;
//         temp->next->prev = temp->prev;
//     }
//     delete temp;
// }

// void delete_at_head(Node *&head, Node *&tail)
// {
//     if (head == NULL)
//     {
//         return;
//     }
//     Node *deletenode = head;
//     head = head->next;
//     if (head != NULL)
//     {
//         head->prev = NULL;
//     }
//     else
//     {
//         tail = NULL;
//     }
//     delete deletenode;
// }

// int size(Node *head)
// {
//     Node *temp = head;
//     int idx = 0;
//     while (temp != NULL)
//     {
//         temp = temp->next;
//         idx++;
//     }
//     return idx;
// }

// int main()
// {
//     int q;
//     cin >> q;

//     Node *head = NULL;
//     Node *tail = NULL;

//     while (q--)
//     {
//         int x;
//         long long int v;
//         cin >> x;
//         cin >> v;

//         int s = size(head);

//         if (x == 0)
//         {
//             insert_at_head(head, tail, v);
//         }
//         else if (x == 1)
//         {
//             insert_at_tail(head, tail, v);
//         }
//         else if (x == 2)
//         {
//             if (v == 0)
//             {
//                 delete_at_head(head, tail);
//             }
//             else if (v > 0 && v < s)
//             {
//                 delete_at_any_pos(head, tail, v);
//             }
//         }
//         print_forward(head);
//         print_backward(tail);
//     }
//     return 0;
// }