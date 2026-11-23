#include<iostream>
using namespace std;
struct Treenode{
    int val;
    Treenode *left;
    Treenode *right;

    Treenode(int x)
    {
        val = x;
        left = nullptr;
        right = nullptr;
    }
};

void Preorder( Treenode *root){
    if(root == nullptr){
        return;
    }
    cout<<root->val<<" ";
    Preorder(root->left);
    Preorder(root->right);
}
void Inorder( Treenode *root){
    if(root == nullptr){
        return;
    }
    Inorder(root->left);
    cout<<root->val<<" ";
    Inorder(root->right);
}
void Postorder( Treenode *root){
    if(root == nullptr){
        return;
    }
    Postorder(root->left);
    Postorder(root->right);
    cout<<root->val<<" ";
}
int main(){
    Treenode *root=new Treenode(1);
    Treenode *node2 = new Treenode(2);

    root->left = node2;

    Treenode *node3 = new Treenode(3);

    root->right = node3;

    Treenode *node4 = new Treenode(4);
    Treenode *node5 = new Treenode(5);
    node2->left = node4;
    node2->right = node5;

    Preorder(root);
    cout<<endl;
    Inorder(root);
    cout<<endl;
    Postorder(root);

    return 0;
}