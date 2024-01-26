#include <iostream>

class TreeNode
{
public:
    int value;
    TreeNode *left, *right;
    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    // Further implementation...
    return 0;
}