// https://www.hackerrank.com/contests/assignment-04-a-basic-data-structure-a-batch-06/challenges/sum-without-leaf


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
        Node *p = q.front();
        q.pop();

        int l, r;
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

        if (p->left != NULL)
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

// calcualtion
void sum_without_leaf(Node *root)
{
    queue<Node *> q;

    if (root == NULL)
        return;
    else
        q.push(root);

    int sum = 0;

    while (!q.empty())
    {
        Node *f = q.front();                         // taking out of the queue
        q.pop();



        if (f->left != NULL)                             // pushing children
        {
            q.push(f->left);
        }

        if (f->right != NULL)
        {
            q.push(f->right);
        }


        if (f->left == NULL && f->right == NULL)                        // if both children are NULL, Then don't add it into SUM & continue the loop
            continue;

        else
            sum = sum + f->val;                                             

    }

    cout << sum;
}

int main()
{
    Node *root = input_tree();

    sum_without_leaf(root);

    return 0;
}