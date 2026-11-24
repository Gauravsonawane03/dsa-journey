#include <iostream>
using namespace std;
struct treeNode
{
    int val;
    treeNode *left;
    treeNode *right;
    treeNode(int x)
    {
        val = x;
        left = nullptr;
        right = nullptr;
    }
};
void preorder(treeNode *root)
{
    if (root == nullptr)
    {
        return;
    }
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(treeNode *root)
{
    if (root == nullptr)
    {
        return;
    }
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}
void postorder(treeNode *root)
{
    if (root == nullptr)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->val << " ";
}
int main()
{
    treeNode *root = new treeNode(1);
    treeNode *node2 = new treeNode(2);
    root->left = node2;
    treeNode *node3 = new treeNode(3);
    root->right = node3;
    treeNode *node4 = new treeNode(4);
    treeNode *node5 = new treeNode(5);
    treeNode *node6 = new treeNode(6);
    treeNode *node7 = new treeNode(7);
    node2->left = node4;
    node2->right = node5;
    node3->left = node6;
    node3->right = node7;
    preorder(root);
    cout << endl;
    inorder(root);
    cout << endl;
    postorder(root);
    return 0;
}