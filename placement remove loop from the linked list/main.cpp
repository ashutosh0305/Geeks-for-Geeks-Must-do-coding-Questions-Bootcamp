#include <iostream>

using namespace std;

class Node
{
   public:
       int data;
       Node* next;

};
void remove(Node* node,Node*p)
{
    Node* temp;
    while(node!=p)
    {
        temp=p;
        p=p->next;
        node=node->next;


    }
    p=temp;
    p->next=NULL;
}
void detectAndRemoveloop(Node* head)
{
    Node* p=head;
    Node* q=head;
    while(p && q && q->next )
    {
        p=p->next;
        q=q->next->next;
        if(p==q)
            return remove(head,p);
    }
}
void printlist(Node* node)
{
    while(node!=NULL)
    {
        cout<<node->data<<" ";
        node=node->next;


    }
}
Node* newNode(int key)
{
    Node* temp=new Node();
    temp->data=key;
    temp->next=NULL;
    return temp;
}

int main()
{
   Node* head=newNode(50);
   head->next=newNode(20);
   head->next->next=newNode(15);
   head->next->next->next=newNode(4);
   head->next->next->next->next=newNode(10);
   head->next->next->next->next->next=head->next->next;
   detectAndRemoveloop(head);
   cout<<"linked lsit after removing loop"<<endl;
   printlist(head);
   return 0;
}




