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
        Node *p = q.front();                            // step(i)
        q.pop();

        int l, r;                                       // step(ii)
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

        if (p->left != NULL)                            // step(iii)
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




bool search(Node *root, int val)                                                // short code
{
    if (root == NULL)
        return false;
        
    if (root->val == val)
        return true;
        
    if (root->val > val)
        return search(root->left, val);
    else
        return search(root->right, val);
}





int main()                                                                  //  short code
{
    Node *root = input_tree();

    int val;
    cin >> val;

    if (search(root, val))
        cout << "Found";
    else
        cout << "Not Found";
    return 0;
}









/*

 input:
 18 7 21 -1 12 20 26 9 15 -1 -1 -1 -1 -1 -1 -1 -1
 15

 output:
 Found




 input:
 18 7 21 -1 12 20 26 9 15 -1 -1 -1 -1 -1 -1 -1 -1
 150

 output:
 Not Found

 
*/
