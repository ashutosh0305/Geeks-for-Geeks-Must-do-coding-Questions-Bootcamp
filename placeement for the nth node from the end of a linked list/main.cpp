#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node* next;
};
int getcount(Node* node)
{
    int count=0;
    while(node!=NULL)
    {
        node=node->next;
        count++;
    }
    return count;

}
void printNthfromlast(Node* head,int k)
{
    int c=getcount(head);
    int d=c-k;
    Node* temp;
    for(int i=1;i<d+1;i++)
    {
     head=head->next;
     temp=head;
    }
    cout<<temp->data;
}
void push(Node** headref,int key)
{
    Node* newNode=new Node();
    newNode->data=key;
    newNode->next=(*headref);
    (*headref)=newNode;

}
int main()
{
Node* head=NULL;
push(&head,20);
push(&head,4);
push(&head,15);
push(&head,35);
printNthfromlast(head,4);
return 0;

}
