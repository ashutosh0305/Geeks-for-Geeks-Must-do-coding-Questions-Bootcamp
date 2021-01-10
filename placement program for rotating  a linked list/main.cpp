#include <iostream>

using namespace std;

class Node
{
public :
    int data;
    Node* next;
};
void rotate(Node **head_ref,int k)
{
    if(k==0)
    {
        return ;
    }
    int count=1;
    Node* current=*head_ref;

    while(count<k && current!=NULL)
    {
        current=current->next;
        count++;
    }
    if(current==NULL)
        return;
    Node *kthNode=current;
    while(current->next!=NULL)
    {
        current=current->next;

    }
    current->next=*head_ref;
    *head_ref=kthNode->next;
    kthNode->next=NULL;
}
void push(Node** head_ref,int data)
{
    Node* new_node=new Node();
    new_node->data=data;
    new_node->next=*head_ref;
    (*head_ref)=new_node;

}
void printlist(Node* node)
{
    while(node!=NULL)
    {
        cout<<node->data<<" ";
        node=node->next;
    }
}
int main()
{
    Node* head=NULL;
    for(int i=60;i>0;i-=10)
    {
        push(&head,i);

    }
    cout<<"given linked list \n";
    printlist(head);
    rotate(&head,4);
    cout<<"\n rotated linked list\n";
    printlist(head);
    return 0;

}
