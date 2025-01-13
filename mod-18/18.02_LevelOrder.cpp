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

void level_order(Node *root)
{
    queue<Node *> q;                                     // 'Node' type queue; Bcz we are pushing the whole node into the queue; We need full node for access the child (left/right)

    q.push(root);                                                 // pushing the root

    while (!q.empty())
    {
        Node *f = q.front();                                          // step (i) -- taking out the value
        q.pop();



        cout << f->val << " ";                                        // step (ii) -- print the value



        if (f->left != NULL)                                         // step (iii) -- push children of the value
        {
            q.push(f->left);
        }

        if (f->right != NULL)
        {
            q.push(f->right);
        }
    }
}

int main()
{
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);

    root->left = a;
    root->right = b;
    a->left = c;
    b->left = d;
    b->right = e;


    level_order(root);


    return 0;
}