// https://www.naukri.com/code360/problems/level-order-traversal_796002?leftPanelTabValue=PROBLEM


#include <bits/stdc++.h> 

vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{

    queue<BinaryTreeNode<int>* > q;
    vector<int> v;

    if(root!=NULL)
    q.push(root);

     while (!q.empty())
    {
        BinaryTreeNode<int> *f = q.front();
        q.pop();



        v.push_back(f->val);



        if (f->left != NULL)
        {
            q.push(f->left);
        }

        if (f->right != NULL)
        {
            q.push(f->right);
        }
    }

    return v;
}