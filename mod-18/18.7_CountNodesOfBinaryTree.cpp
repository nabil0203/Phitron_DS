// using Recursion
// we need input code

// both input & output

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



int count_nodes(Node* root)
{
    if (root == NULL)
    {
        return 0;                                // no tree is available, so SIZE IS ZERO
    }


    else
    {
        int l = count_nodes(root->left);
        int r = count_nodes(root->right);

        return l+r+1;
    }
    
}



int main()
{
    Node *root = input_tree();                       // input


    cout << count_nodes(root);

    return 0;
}
