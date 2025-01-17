// https://www.hackerrank.com/contests/assignment-04-a-basic-data-structure-a-batch-06/challenges/print-outer-tree



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
            q.push(p->left);

        if (p->right != NULL)
            q.push(p->right);
    }

    return root;
}

void print_left(Node *root)
{
    if (root == NULL)
        return;


    if (root->left != NULL)
        print_left(root->left);

    else if (root->right != NULL)
        print_left(root->right);

    cout << root->val << " ";
    

}


void print_right(Node *root)
{
    if (root == NULL)
        return;

    cout << root->val << " ";

    if (root->right != NULL)
        print_right(root->right);

    else if (root->left != NULL)
        print_right(root->left);
}


int main()
{
    Node *root = input_tree();

    print_left(root->left);

    cout << root->val << " ";
    
    print_right(root->right);

    return 0;
}