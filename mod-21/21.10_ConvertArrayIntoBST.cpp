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



//output
void level_order(Node *root)
{
    queue<Node *> q;

    if (root != NULL)
        q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        cout << f->val << " ";

        if (f->left != NULL)
        {
            q.push(f->left);
        }

        if (f->right != NULL)
        {
            q.push(f->right);
        }
    }
}


Node* convert (int a[], int n, int l, int r)                                // this fucntion will return the ROOT node, so return type is NODE
{

    if(l > r)                                                                  // base case
        return NULL;



    int mid = (l+r)/2;                                                          // mid

    Node* root = new Node(a[mid]);                                              // the mid index's value is the root

    Node* left_root = convert(a, n, l, mid-1);                                       // left side BST making by recursion (B--190)
    Node* right_root = convert(a, n, mid+1, r);                                      // right side BST making by recursion (B--190)

    root->left = left_root;
    root->right = right_root;

    return root;

}




int main()
{   
    int n;                              
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];                                                             // array input
    }

    Node* root = convert(a,n,0,n-1);                                   // funtion calling;  (a)-> array; (n)->size of array; (0)->left index of array, (n-1)-> right index of array

    level_order(root);                                                       // print BST


    return 0;
}













/*

input
6
2 5 8 11 15 18


output:
8 2 15 5 11 18 

*/