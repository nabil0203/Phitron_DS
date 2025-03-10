// code from Input Linked list
// A new Delete funtion added




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


void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}


void delete_at_any_pos(Node*&head, int index){                        // delete function

    Node *temp = head;
    for (int i = 0; i < index; i++)
    {
        temp = temp->next;
    }

    Node * deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
    
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


    delete_at_any_pos(head,2);                           // calling delete function

    print_linked_list(head);

    return 0;
}



/*

intput:
10 20 30 40 -1

Output:
10
20
30


*/