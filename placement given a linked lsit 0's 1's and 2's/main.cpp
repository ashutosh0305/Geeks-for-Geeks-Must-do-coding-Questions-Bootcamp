#include <iostream>

using namespace std;
class Node
{
public:
    int data;
    Node* next;

};


void sortlist(Node *head)
{
    int count[3]={0,0,0};
    Node *ptr=head;
    while(ptr!=NULL)
    {
        count[ptr->data]+=1;
        ptr=ptr->next;
    }
    int i=0;
    ptr=head;
    while(ptr!=NULL)
    {
        if(count[i]==0)
        {
            ++i;

        }
        else
        {
            ptr->data=i;
            --count[i];
            ptr=ptr->next;

        }
    }

}
void push(Node**head_ref,int new_data)
{
    Node* new_node=new Node();
    new_node->data=new_data;
    new_node->next=(*head_ref);
    (*head_ref)=new_node;

}
void printlist(Node *node)
{
    while(node!=NULL)
    {
    cout<<node->data<<" ";
    node=node->next;
    }
    cout<<endl;
}


int main()
{
   Node *head=NULL;
   push(&head,0);
   push(&head,1);
   push(&head,0);
   push(&head,2);
   push(&head,1);
   push(&head,1);
   push(&head,2);
   push(&head,1);
   push(&head,2);
   cout<<"linked list before sorting \n";
   printlist(head);
   sortlist(head);
   cout<<"linked list after sorting \n";
   printlist(head);
   return 0;
}
