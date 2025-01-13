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



int count_leafs(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    if (root->left == NULL && root->right == NULL)
    {
        return 1;                                                    // leaf node doesn't have any child; so when the condition is true, RETURN 1;
    }

    int l = count_leafs(root->left);
    int r = count_leafs(root->right);

    return l + r;                                                  // dont count the root; thats why only 'l+r'
}



int main()
{
    Node *root = input_tree(); // input

    cout << count_leafs(root);

    return 0;
}
