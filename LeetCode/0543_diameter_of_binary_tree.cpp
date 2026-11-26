#include <iostream>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution
{
public:
    int height(TreeNode *root, int &maxDiameter)
    {
        if (root == nullptr)
        {
            return 0;
        }
        int leftH = height(root->left, maxDiameter);
        int rightH = height(root->right, maxDiameter);
        maxDiameter = max(maxDiameter, leftH + rightH);
        return 1 + max(leftH, rightH);
    }
    int diameterOfBinaryTree(TreeNode *root)
    {
        int maxDiameter = 0;
        if (root == nullptr)
        {
            return 0;
        }
        height(root, maxDiameter);
        return maxDiameter;
    }
};
