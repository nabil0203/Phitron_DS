// https://www.naukri.com/code360/problems/node-level_920383



#include <bits/stdc++.h> 
int nodeLevel(TreeNode<int>* root, int searchedValue)
{
    queue < pair<TreeNode<int>*,int> > q;

    if(root!=NULL)
        q.push({root,1});                                       // pushing root and the level of root(1)


    while(!q.empty())
    {
        pair <TreeNode<int>*,int> p = q.front();                // (step-i) taking a pair(p) & putting the fornt of queue
        q.pop();                                                // taking out the front


            TreeNode<int>* node = p.first;
            int level = p.second;                                       // for easy calculation, we are breaking the pair into a node & a integer 




        if(node->val == searchedValue)                       //(step-ii)
            return level;                                    // if the node value and the given value are same 




        if(node->left != NULL)                                      //step(iii)
            q.push({node->left, level+1});                          //push the children into the queue


        if(node->right != NULL)
            q.push({node->right, level+1});


    }
}
