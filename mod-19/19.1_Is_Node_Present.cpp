// https://www.naukri.com/code360/problems/code-find-a-node_5682



bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    
    if(root == NULL)
        return false;
    
    if(root->data == x)
        return true;


    bool l = isNodePresent(root->left, x);              // checking if the left has value
    bool r = isNodePresent(root->right, x);             // checking if the right has value

    
    if(l==true || r==true)                      // if any side has the value
        return true;
    else
        return false;

}