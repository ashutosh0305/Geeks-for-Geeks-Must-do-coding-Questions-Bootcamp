#include <iostream>

using namespace std;
class Node
{
public:
    int data;
    Node* left;
    Node* right;

    Node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;

    }
};
void convert(Node* p,Node** head)
{
  if(p==NULL)
  {
      return;
  }
  static Node* prev=NULL;
  convert(p->left,head);
  if(prev==NULL)
    {
        *head=p;
    }
  else
    {
        prev->right=p;
        p->left=prev;
    }
    prev=p;
    convert(p->right,head);
}
void printlist(Node* head)
{
    cout<<"extracted double linked list is: \n";
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->right;
    }
}

int main()
{
    Node* root=new Node(10);
    root->left=new Node(12);
    root->right=new Node(15);
    root->left->left=new Node(25);
    root->left->right=new Node(30);
    root->right->left=new Node(36);
    Node* head=NULL;
    convert(root,&head);
    printlist(head);
    return 0;
}


