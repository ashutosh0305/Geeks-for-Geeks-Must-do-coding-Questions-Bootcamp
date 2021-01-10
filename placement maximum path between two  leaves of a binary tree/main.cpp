#include <iostream>

using namespace std;
class Node
{
    public:
    int data;
    Node* left,*right;

};
int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;

}
Node* newNode(int data)
{
    Node* node=new Node();
    node->data=data;
    node->left=node->right=NULL;
    return (node);
}

int maxpathsumutil(Node* root,int &res)
{
    if(root==NULL)
    {
        return 0;
    }
    if(!root->left && !root->right)
    {

        return root->data;

    }
    int ls=maxpathsumutil(root->left,res);
    int rs=maxpathsumutil(root->right,res);

    if(root->left  && root->right)
    {
      res=max(res,ls+rs+root->data);
      return max(ls,rs)+root->data;

    }
    return (!root->left)?rs+root->data:ls+root->data;

}
int maxpathsum(Node* root)
{
    int res=INT_MIN;
    maxpathsumutil(root,res);
    return res;
}
int main()
{
    Node* root=newNode(-15);
    root->left=newNode(5);
    root->right=newNode(6);
    root->left->left=newNode(-8);
    root->left->right=newNode(1);
    root->left->left->left=newNode(2);
    root->left->left->right=newNode(6);
    root->right->left=newNode(3);
    root->right->right=newNode(9);
    root->right->right->right=newNode(0);
    root->right->right->right->left=newNode(4);
    root->right->right->right->right=newNode(-1);
    root->right->right->right->right->left=newNode(10);
    cout<<"max pathsum of the given binary tree is"
    <<maxpathsum(root);
    return 0;
}
