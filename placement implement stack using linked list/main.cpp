#include <iostream>

using namespace std;
class Node
{

public:
    int data;
    Node* next;

};
void push(Node**headref,int data)
{
    Node* newNode=new Node();
    newNode->data=data;
    newNode->next=(*headref);
    *headref=newNode;
}
int top(Node* head)
{
    return head->data;
}
void pop(Node* head)
{
    if (top(head)==0)
    {
        cout<<"this is empty";
        return;

    }
    else
    {
        Node *temp=head;
        head=head->next;
        cout<<"the poped element is "<<temp->data<<endl;


    }

}
void println(Node *ref)
{
    while(ref!=NULL)
    {
       cout<<ref->data<<endl;
       ref=ref->next;
    }
}







int main()
{
    int x,n;
    cout<<"enter the no. of elements in the stack"<<endl;
    cin>>x;
    cout<<"eneter elements into the stack"<<endl;
    Node* head=NULL;
    for(int i=0;i<x;i++)
    {
            cin>>n;
            push(&head,n);
    }
    cout<<"stack element are";
    println(head);
    cout<<"now it is poping element from the stack"<<endl;
    pop(head);
    cout<<"now peek element is"<<endl;
    int y=top(head);
    y=top(head);
    cout<<y;
    return 0;

}
