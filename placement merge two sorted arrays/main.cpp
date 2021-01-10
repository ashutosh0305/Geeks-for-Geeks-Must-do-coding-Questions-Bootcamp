#include <iostream>

using namespace std;
class Node
{
    public:
    int data;
    Node* next;
};
Node* merge(Node* head1,Node* head2)
{
    Node* p=head1;
    Node* q=head2;
    Node* s=NULL;

    if(p==NULL)
        return q;
    if(q==NULL)
        return p;
    if(p->data<=q->data)
    {
        s=p;
        p=s->next;
    }
    else
    {
        s=q;
        q=s->next;
    }
    Node* newhead=s;
    while(p!=NULL && q!=NULL)
    {
        if(p->data<=q->data)
        {
            s->next=p;
            s=p;
            p=s->next;
        }
        else
        {
            s->next=q;
            s=q;
            q=s->next;

        }
    }
        if(p==NULL)
        {
            s->next=q;
        }
        if(q==NULL)
        {
            s->next=p;
        }
        return newhead;
}

void push(Node**headref,int data)
{
   Node* newNode=new Node();
   newNode->data=data;
   newNode->next=(*headref);
   (*headref)= newNode;

}
void printList(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" "  ;
        head=head->next;
    }

}
int main()
{
    Node* head1=NULL;
    Node* head2=NULL;
    push(&head1,1);
    push(&head1,3);
    push(&head1,5);
    push(&head2,0);
    push(&head2,2);
    push(&head2,4);
    Node* mergehead=merge(head1,head2);
    printList(mergehead);
    return 0;


}
