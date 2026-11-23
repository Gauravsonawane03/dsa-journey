#include <iostream>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x)
    {
        val = x;
        left = nullptr;
        right = nullptr;
    }
};
void preorder(TreeNode* root) {
    if (root == nullptr) {
    return;
}
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(TreeNode* root) {
    if (root == nullptr) {
        return;
    }

    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}
void postorder(TreeNode* root) {
    if (root == nullptr) {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->val << " ";
}
int main()
{
    TreeNode *root = new TreeNode(1);

    TreeNode *node2 = new TreeNode(2);

    root->left = node2;

    TreeNode *node3 = new TreeNode(3);

    root->right = node3;

    TreeNode *node4 = new TreeNode(4);
    TreeNode *node5 = new TreeNode(5);

    node2->left = node4;
    node2->right = node5;
    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
    return 0;
}