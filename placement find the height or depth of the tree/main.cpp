#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node* left;
    Node* right;
};
int maxheight(Node* root)
{
    if(root==NULL)
        return 0;
    int left=maxheight(root->left);
    int right=maxheight(root->right);
    if(left>right)
    {
        return left+1;
    }
    else
    {
        return right+1;
    }
}
Node* newNode(int data)
{
    Node* node=new Node();
    node->data=data;
    node->left=NULL;
    node->right=NULL;
    return (node);
}
int main()
{
    Node* root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);
    cout<<"height of tree is" <<maxheight(root);
    return 0;



}
