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
        Node *p = q.front();                                // step(i) 
        q.pop();

        int l, r;                                               // step(ii)
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

        if (p->left != NULL)                                // step(iii)
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





bool search(Node* root, int val)
{
    if(root == NULL)                                                    //  if root null, no value is found
        return false;

    if(root->val == val)                                                //  if the value we are searching are same as the root
        return true;


    if (root->val > val)                                                //  if the value is smallar than root, then it will to go to LEFT; right side is ignored
    {
        bool l = search(root->left,val);
        return l;
    }


    if (root->val < val)                                                //  if the value is bigger than root, then it will to go to RIGHT; left side is ignored
    {
        bool r = search(root->right, val);
        return r;
    }
    
}





int main()
{
    Node *root = input_tree();                            // input of the binary TREE

    int val;                              
    cin >> val;                                          // the value we want to search in the TREE

    bool a = search(root,val);                               // calling the search Function


    if(a == true)
        cout << "FOUND";

    else
        cout << "NOT FOUND";
        


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