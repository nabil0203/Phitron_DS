#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// input
Node *input_tree()
{

    int val;
    cin >> val;

    Node *root;

    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;

    if (root != NULL)
    {
        q.push(root);
    }

    while (!q.empty())
    {
        Node *p = q.front();                                    // step(i)
        q.pop();

        int l, r;                                            // step(ii)
        cin >> l >> r;

        Node *myLeft, *myRight;

        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);

        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left != NULL)                                    // step(iii)
        {
            q.push(p->left);
        }

        if (p->right != NULL)
        {
            q.push(p->right);
        }
    }

    return root;
}

void level_order(Node *root)
{
    queue<Node *> q;

    if (root != NULL)
        q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        cout << f->val << " ";

        if (f->left != NULL)
        {
            q.push(f->left);
        }

        if (f->right != NULL)
        {
            q.push(f->right);
        }
    }
}




void insert(Node *&root, int val)
{
    // root check
    if (root == NULL)
    {
        Node *a = new Node(val);                                              // if there is no tree available; then that Value will be the Root
        root = a;
    }






    if (root->val > val)                                                       // if the value is SMALLER than the root, then it will go LEFT
    {   
        // left
        if (root->left == NULL)
        {
            Node *b = new Node(val);                                              // if NULL is found on Left; then the value will be the inserted there in a node
            root->left = b;
        }

        else
            insert(root->left , val);                                               // if not null, the process continues(by calling recursion)
    }









    if (root->val < val)                                                       // if the value is BIGGER than the root, then it will go RIGHT
    {
        // right
        if (root->right == NULL)
        {
            Node *c = new Node(val);                                              // if NULL is found on Right; then the value will be the inserted there in a node
            root->right = c;
        }

        else
            insert(root->right , val);                                             // if not null, the process continues(by calling recursion)
    }


}




int main()
{
    Node *root = input_tree();                                                   // input tree

    int val;
    cin >> val;                                                                 // the value I want to insert

    insert(root, val);                                                          // calling insert Function

    level_order(root);

    return 0;
}












/*

input:
10 6 23 -1 9 19 29 7 -1 12 -1 -1 35 -1 -1 -1 -1 -1 -1
21

output:
10 6 23 9 19 29 7 12 21 35 






input:
10 6 23 -1 9 19 29 7 -1 12 -1 -1 35 -1 -1 -1 -1 -1 -1
11

output:
10 6 23 9 19 29 7 12 35 11 


*/