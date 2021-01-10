#include <iostream>

using namespace std;
class Node
{
public:
    int data;
    Node* left;
    Node* right;

};
Node* newNode(int key)
{
    Node* temp=new Node();
    temp->data=key;
    temp->left=temp->right=NULL;
    return temp;

}
bool ismirror(Node* root1,Node* root2)
{
    if(root1==NULL&&root2==NULL)
    {
        return true;

    }
   else if(root1->data==root2->data)
        {
            return ismirror(root1->left,root2->right) &&
            ismirror(root1->right,root2->left);
        }
   else
   return false;
}
bool issymmetric(Node* root)
{
    return ismirror(root,root);
}

int main()
{
    Node*root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(2);
    root->left->left=newNode(3);
    root->left->right=newNode(4);
    root->right->left=newNode(4);
    root->right->right=newNode(5);
    cout<<issymmetric(root);
    return 0;
}
