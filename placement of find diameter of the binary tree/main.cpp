#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node* left;
    Node* right;

};
int height(Node*);

int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}

int diameter(Node* tree)
{
    if(tree==NULL)
        return 0;
int lheight=height(tree->left);
int rheight=height(tree->right);
int totalheight=lheight+rheight+1;
int ldiameter=diameter(tree->left);
int rdiameter=diameter(tree->right);
int res=max(ldiameter,rdiameter);
return max(totalheight,res);
}
int height(Node* root)
{
    if(!root)
        return 0;
    else
        {
            int l=height(root->left);
            int r=height(root->right);
            return max(l,r)+1;


        }
}
Node* newNode(int key)
{
    Node* node=new Node;
    node->data=key;
    node->left=NULL;
    node->right=NULL;
    return(node);

}
int main()
{
    Node *root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);
    cout<<"diameter of the given binary tree is \n" <<diameter(root);
    return 0;
}

