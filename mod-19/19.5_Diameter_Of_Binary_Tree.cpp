// https://www.naukri.com/code360/problems/diameter-of-the-binary-tree_920552



int mx;                                                 // global variable

int max_height(TreeNode<int> *root)
{
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
        return 1;

    int l = max_height(root->left);
    int r = max_height(root->right);
    int d = l + r;                                                  // differnt from the height code
    mx = max(mx, d);                                                    // differnt from the height code
    return max(l, r) + 1;
}

int diameterOfBinaryTree(TreeNode<int> *root)
{
    mx = 0;
    int h = max_height(root);
    return mx;
}
