// https://www.hackerrank.com/contests/assignment-03-a-basic-data-structure-a-batch-06/challenges/same-or-not-4

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



class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;

    int sizeeee = 0;

    void push(int val)
    {
        sizeeee++;

        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        newnode->prev = tail; // doubly
        tail = newnode;
    }

    void pop()
    {
        sizeeee--;

        Node *deletenode = head;

        head = head->next;

        delete deletenode;

        if (head == NULL)
        {
            tail = NULL;
            return; // doubly
        }

        head->prev = NULL; // doubly
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
        return sizeeee;
    }

    bool empty()
    {
        return head == NULL;
    }
};




class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val)
    {
        sz++;
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
    void pop()
    {
        sz--;
        Node *deletenode = tail;
        tail = tail->prev;
        delete deletenode;
        if (tail == NULL)
        {
            head = NULL;
            return;
        }
        tail->next = NULL;
    }
    int top()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        return head == NULL;
    }
};






int main()
{

    int n, m;
    cin >> n >> m;



    myStack st;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }




    myQueue q;
    for (int i = 0; i < m; i++)
    {
        int z;
        cin >> z;
        q.push(z);
    }





    
    if (n != m)
    {
        cout << "NO";
    }

    else
    {
        int flag = 0;
        while (!st.empty() && !q.empty())
        {
            if (st.top() == q.front())
            {
                st.pop();
                q.pop();
            }
            else
            {
                flag++;
                break;
            }
        }
        if (flag == 0)
            cout << "YES";
        else
            cout << "NO";
    }

    return 0;
}