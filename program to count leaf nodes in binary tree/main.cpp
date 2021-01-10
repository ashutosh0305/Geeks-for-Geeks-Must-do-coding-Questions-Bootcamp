#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node* left;
    Node* right;
};
Node* newNode(int data)
{
    Node* temp=new Node();
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    return(temp);
}
 void getleafcount(Node* root,int &count)
 {
     if(root==NULL)
        return ;
     if(root->left==NULL&&root->right==NULL)
        count++;
     if(root->left)
        getleafcount(root->left,count);
     if(root->right)
        getleafcount(root->right,count);

 }
 int getcount(Node* root)
 {
     int count=0;
     getleafcount(root,count);
     return(count);
 }

int main()
{
 Node* root=newNode(1);
 root->left=newNode(2);
 root->right=newNode(3);
 root->left->left=newNode(4);
 root->left->right=newNode(5);
 cout<<"leaf count of the tree is:"<<
 getcount(root)<<endl;
 return 0;
}
