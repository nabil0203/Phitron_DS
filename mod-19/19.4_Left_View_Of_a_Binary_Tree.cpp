// https://www.naukri.com/code360/problems/left-view-of-a-binary-tree_920519


#include <bits/stdc++.h>

vector<int> getLeftView(TreeNode<int> *root) {

  vector<int> v;
  bool fre[3005] = {false};                                  // took a frequency array and initialized all as FALSE

  queue<pair<TreeNode<int> *, int>> q;                       // pair type Queue

  if (root != NULL)
    q.push({root, 1});

  while (!q.empty()) {
    pair<TreeNode<int> *, int> p = q.front();                         // step(i) take out from queue
    q.pop();

    TreeNode<int> *node = p.first;
    int level = p.second;


                                                                 // step (ii)
    if(fre[level] == false )                                      // the freq array index is false then Push into Queue and make that index of freq array TRUE
    {
        v.push_back(node->data);
        fre[level] = true; 
    }



    if (node->left != NULL)                                           // step(iii)
      q.push({node->left, level + 1});                                // push Children into Queue

    if (node->right != NULL)
      q.push({node->right, level + 1});
  }
    return v;
}
