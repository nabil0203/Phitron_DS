// no input

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

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = a;                                // cycle created intentionally



    Node *slow = head;
    Node *fast = head;
    int flag = 0;

    while (fast != NULL  && fast->next !=NULL)                      // even && not even
    {
        slow = slow->next;                                  // increment 1 node each time
        fast = fast->next->next;                            // increment 2 node each time

        if (slow == fast)
        {
            // cycle detected
            flag++;
            break;
        }
    }

    if (flag == 0)
    {
        cout << "No Cycle";
    }
    else
    {
        cout << "Cycle Detected";
    }

    return 0;
}