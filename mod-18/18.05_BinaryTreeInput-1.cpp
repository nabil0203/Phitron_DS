// input function created here



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





Node* input_tree()
{

    int val;                                                    // Root input
    cin >> val;

    Node *root ;                                                // Node for the root
    
    if(val == -1)
        root = NULL;                                             // If No tree
    else
    root = new Node(val);                                       // value into Root node

    queue<Node *> q;                                            // taking a Queue of Node type


    if(root != NULL)
    {
        q.push(root);                                               // pushing root into queue
    }






    while (!q.empty())                                        // step (i)
    {
        Node *p = q.front();                                 // Front of the Queue is the parent node 'p'
        q.pop();                                             // take out the front from the queue







        int l, r;                                                    // step (ii)
        cin >> l >> r;                                               // take 2 inputs as Children

        Node *myLeft, *myRight;                                      // 2 nodes for the children

        if (l == -1)                                                 // checking condion
            myLeft = NULL;
        else
            myLeft = new Node(l);

        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);


        p->left = myLeft;                                       // 2 children making connection with their parent
        p->right = myRight;










        if (p->left != NULL)                                        // step (iii)
        {                                                           // push childen into queue
            q.push(p->left);
        }

        if (p->right != NULL)
        {
            q.push(p->right);
        }



    }


    return root;
}




int main()
{
    Node* root = input_tree();                  // input

    
    return 0;
}