#include <iostream>

using namespace std;
class Node
{
public:
    int data;
    Node * next;
};
Node* pairwiseswap(Node* head)
{
    if(head==NULL || head->next==NULL)
        return head;
    Node* remaining=head->next->next;
    Node* new_head=head->next;
    new_head->next=head;
    head->next=pairwiseswap(remaining);
    return new_head;
}

void push(Node** headref,int new_data)
{
    Node* new_node=new Node();
    new_node->data=new_data;
    new_node->next=(*headref);
    (*headref)=new_node;
}
void printList(Node* node)
{
    while(node!=NULL)
    {
        cout<<node->data<<" ";
        node=node->next;
    }
}
int main()
{
  Node* start=NULL;
  push(&start,7);
  push(&start,6);
  push(&start,5);
  push(&start,4);
  push(&start,3);
  push(&start,2);
  push(&start,1);
  cout<<"linked list before calling pairwiseswap()";
  printList(start);
  start=pairwiseswap(start);
  cout<<"\nlinked list after calling pairwiseswap()";
  printList(start);

}
