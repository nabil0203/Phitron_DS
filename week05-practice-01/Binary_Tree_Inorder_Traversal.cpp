// https://leetcode.com/problems/binary-tree-inorder-traversal/description/


class Solution {

    void inorder(TreeNode* root, vector<int> & v)
    {
        if(root==NULL)
        {
            return;
        }

        inorder(root->left, v);
        v.push_back(root->val);
        inorder(root->right, v);
    }


public:
    vector<int> inorderTraversal(TreeNode* root) {
            
        vector<int> v;

        inorder(root, v);

        return v;
    }
};