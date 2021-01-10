#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node* left;
    node* right;

node(int data)
{
    this->data=data;
    this->left=NULL;
    this->right=NULL;

}
};
int isBSTutil(node* node,int min,int max);
int isBST(node* node);
int isBST(node* node)
{
    return(isBSTutil(node,INT_MIN,INT_MAX));
}
int isBSTutil(node* node,int min,int max)
{
    if(node==NULL)
        return 1;
    if(node->data<min||node->data>max)
        return 0;
    return
    isBSTutil(node->left,min,node->data-1)&&
    isBSTutil(node->right,node->data+1,max);
}
int main()
{
    node* root=new node(4);
    root->left=new node(2);
    root->right=new node(5);
    root->left->left=new node(1);
    root->left->right=new node(3);
    if(isBST(root))
        cout<<"is BST";
    else
        cout<<"not a BST";
    return 0;
}
