// https://leetcode.com/problems/binary-tree-preorder-traversal/description/


class Solution {

    void preorder(TreeNode* root, vector<int>& v)
    {
        if(root == NULL)
        {
            return;
        }

        v.push_back(root->val);
        preorder(root->left, v);
        preorder(root->right, v);
    }


public:
    vector<int> preorderTraversal(TreeNode* root) {
        
        vector<int> v;

        preorder(root, v);

        return v;
    }
};