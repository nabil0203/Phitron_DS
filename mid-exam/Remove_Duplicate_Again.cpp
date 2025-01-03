// https://www.hackerrank.com/contests/mid-term-exam-a-basic-data-structures-a-batch-06/challenges/remove-duplicate-again



#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        l.push_back(val);
    }

    l.sort();
    l.unique();
    
    for (int v : l)
    {
        cout << v << " ";
    }

    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next;

//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//     }
// };

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
//     tail = newnode;
// }

// void print_linked_list(Node *&head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->val << " ";
//         temp = temp->next;
//     }
// }

// void duplicate_element(Node *&head)
// {
//     if (head == NULL)
//     {
//         return;
//     }

//     for (Node *i = head; i != NULL; i = i->next)
//     {
//         Node *previous_node = i;
//         for (Node *j = i->next; j != NULL;)
//         {
//             if (i->val == j->val)
//             {
//                 Node *deleteNode = j;
//                 previous_node->next = j->next;
//                 j = j->next;
//                 delete deleteNode;
//             }

//             else
//             {
//                 previous_node = j;
//                 j = j->next;
//             }
//         }
//     }
// }

// void sort_linked_list(Node *&head)
// {
//     for (Node *i = head; i != NULL; i = i->next)
//     {
//         for (Node *j = i->next; j != NULL; j = j->next)
//         {
//             if (i->val > j->val)
//             {
//                 swap(i->val, j->val);
//             }
//         }
//     }
// }

// int main()
// {
//     Node *head = NULL;
//     Node *tail = NULL;

//     int val;
//     while (1)
//     {
//         cin >> val;
//         if (val == -1)
//         {
//             break;
//         }
//         insert_at_tail(head, tail, val);
//     }

//     duplicate_element(head);
//     sort_linked_list(head);
//     print_linked_list(head);

//     return 0;
// }



