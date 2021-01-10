#include <iostream>

using namespace std;
class node
{
    public:
    int data;
    node *left,*right;

};
node* newNode(int item)
{
    node* temp=new node();
    temp->data=item;
    temp->left=temp->right=NULL;
    return temp;
}
void leftviewutil(node* root,int level,int max_level)
{
    if(root==NULL)
    {
        return ;
    }
    if(max_level<level)
    {
        cout<<root->data<<"\t";
        max_level=level;

    }
    leftviewutil(root->left,level+1,max_level);
     leftviewutil(root->right,level+1,max_level);
}


void leftview(node* root)
{
    int max_level=0;
    leftviewutil(root,1,max_level);
}
int main()
{

node *root=newNode(12);
root->left=newNode(10);
root->right=newNode(30);
root->right->left=newNode(25);
root->right->right=newNode(40);
leftview(root);
return 0;
}
