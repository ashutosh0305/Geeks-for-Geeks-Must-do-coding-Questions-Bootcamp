#include <iostream>

using namespace std;
class node
{
public:
    int data;
    node* left;
    node* right;

};
node* newNode(int data)
{
    node* Node=new node();
    Node->data=data;
    Node->left=NULL;
    Node->right=NULL;
    return(Node);

}
int identicaltrees(node* a,node* b)
{
    if(a == NULL && b == NULL)
        return 1;
    else if(a->data==b->data)
    {
        return(identicaltrees(a->left,b->left)&&identicaltrees(a->right,b->right));

    }

    else
        return 0;
}

int main()
{
    node *root1=newNode(1);
    node *root2=newNode(1);
    root1->left=newNode(2);
    root1->right=newNode(3);
    root1->left->left=newNode(4);
    root1->left->right=newNode(5);
    root2->left=newNode(2);
    root2->right=newNode(3);
    root2->left->left=newNode(3);
    root2->left->right=newNode(5);
    if(identicaltrees(root1,root2))
    {
        cout<<"both tree are identical";

    }
    else
        cout<<"trees are not identical";
    return 0;
}



