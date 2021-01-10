#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node* left;
    Node* right;
};
int height(Node* root);
int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;

}
int isbalanced(Node* tree)
{
    if(tree==NULL)
        return 1;
    int l=height(tree->left);
    int r=height(tree->right);
    if(abs(l-r)<=1&&isbalanced(tree->left)&&isbalanced(tree->right))
        return 1;
    return 0;
}
int height(Node* root)
{
    if(root==NULL)
        return 0;
    int left=height(root->left);
    int right=height(root->right);
    return max(left,right)+1;
}

Node* newNode(int data)
{
    Node* temp=new Node();
    temp->data=data;
    temp->right=NULL;
    temp->left=NULL;
    return (temp);

}
int main()
{
    Node* root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);
    root->left->left->left=newNode(8);
    root->right->right=newNode(9);

    if(isbalanced(root))
    {
        cout<<"tree is balanced";

    }
    else
        cout<<"tree is not balanced";
    return 0;
}
