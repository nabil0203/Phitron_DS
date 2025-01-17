// https://www.hackerrank.com/contests/assignment-04-a-basic-data-structure-a-batch-06/challenges/perfect-binary-tree



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



int max_height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }

    int l = max_height(root->left);
    int r = max_height(root->right);

    return max(l, r) + 1;
    
}


int count_nodes(Node* root)
{
    if (root == NULL)
    {
        return 0;
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
    Node *root = input_tree(); 

    int h = max_height(root);                                   // counting height

    int total_nodes = (pow(2,h))-1;                               // implementing formula; given in question


    int n = count_nodes(root);                               // counting nodes


    if(total_nodes == n)                                     // checking the condition 
        cout << "YES";
    else
        cout << "NO";


    return 0;
}