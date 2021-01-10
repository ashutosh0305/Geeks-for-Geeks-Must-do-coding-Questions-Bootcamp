#include <iostream>

using namespace std;



class Node
{
public:
    int data;
    Node *left,*right;
    Node *nextright;

    Node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
        this->nextright= NULL;
    }
};
Node* getnextright(Node* p)
{
    Node* temp=p->nextright;
    while(temp!=NULL)
    {
    if(temp->left)
    {
        return temp->left;
    }
    else
        return temp->right;
        temp=temp->nextright;
    }
    return NULL;
}
void connectrecur(Node* p)
{
    if(!p)
    {
        return ;
    }
    p->nextright=NULL;
    while(p!=NULL)
    {
        Node* q=p;
        while(q!=NULL)
        {
          if(q->left)
          {
              if(q->right)
              {
                  q->left->nextright=q->right;

              }
              else
              {
                  q->left->nextright=getnextright(q);
              }
          }
          if(q->right)
            q->right->nextright=getnextright(q);
          q=q->nextright;
        }
        if(p->left)
            p=p->left;
        else if(p->right)
            p=p->right;
        else
            p=getnextright(p);

    }
}
int main()
{
  Node *root=new Node(10);
  root->left=new Node(8);
  root->right=new Node(2);
  root->left->left=new Node(3);
  root->right->right=new Node(90);
  connectrecur(root);
  cout<<"following are populated nextright pointers in the tree"<<"(-1 is printed if there is nonextright)\n";
  cout<<"netright of "<<root->data<<"is"
  <<(root->nextright?root->nextright->data:-1)<<endl;
  cout<<"nextright of"<<root->left->data<<"is"
  <<(root->left->nextright?root->left->nextright->data:-1)<<endl;
  cout<<"nextright of"<<root->right->data<<"is"
  <<(root->right->nextright?root->right->nextright->data:-1)<<endl;
  cout<<"nextright of" <<root->left->left->data<<"is"
  <<(root->left->left->nextright?root->left->left->nextright->data:-1)<<endl;
  cout<<"nextright of"<<root->right->right->data<<"is"
  <<(root->right->right->nextright?root->right->right->nextright->data:-1)<<endl;
  return 0;
}


