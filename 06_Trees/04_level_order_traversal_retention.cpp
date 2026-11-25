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
void levelorder(TreeNode *root)
{
    if (root == nullptr)
    {
        return;
    }
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        TreeNode *current = q.front();
        q.pop();
        cout << current->val << " ";
        if (current->left != nullptr)
        {
            q.push(current->left);
        }
        if (current->right != nullptr)
        {
            q.push(current->right);
        }
    }
}
int maxDepth(TreeNode *root)
{
    if (root == nullptr)
    {
        return 0;
    }
    return 1 + max(maxDepth(root->left), maxDepth(root->right));
}
int countNodes(TreeNode *root)
{
    if (root == nullptr)
    {
        return 0;
    }
    return 1 + countNodes(root->left) + countNodes(root->right);
}
int main()
{
    TreeNode *root = new TreeNode(1);
    TreeNode *node2 = new TreeNode(2);
    TreeNode *node3 = new TreeNode(3);
    root->left = node2;
    root->right = node3;
    TreeNode *node4 = new TreeNode(4);
    TreeNode *node5 = new TreeNode(5);
    TreeNode *node6 = new TreeNode(6);
    TreeNode *node7 = new TreeNode(7);
    node2->left = node4;
    node2->right = node5;
    node3->left = node6;
    node3->right = node7;
    // levelorder(root);
    // cout<<endl;
    //     //---------------maxdepth-----------//
    //     TreeNode *root = new TreeNode(1);
    //     TreeNode *node2=new TreeNode(2);
    //      TreeNode *node3=new TreeNode(3);
    //       TreeNode *node4=new TreeNode(4);
    //       root->right=node2;
    //       node2->right=node3;
    //         node3->right=node4;
    //    cout << "Max Depth: " << maxDepth(root) << endl;
    cout << "No of Nodes: " << countNodes(root) << endl;
    return 0;
}