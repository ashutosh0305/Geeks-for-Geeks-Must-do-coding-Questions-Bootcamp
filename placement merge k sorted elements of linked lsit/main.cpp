#include <iostream>

using namespace std;
class Node
{
    public:
    int data;
    Node* next;
};
void printlists(Node* node)
{
    while(node!=NULL)
    {
        cout<<node->data<<" ";
        node=node->next;
    }
}
Node* sortedmerge(Node* a,Node* b)
{
    Node* result=NULL;
    if(a==NULL)
        return (b);
    else if(b==NULL)
        return (a);
    if(a->data<=b->data)
    {
        result=a;
        result->next=sortedmerge(a->next,b);

    }
    else
    {
        result=b;
        result->next=sortedmerge(a,b->next);
    }
    return result;
}
Node* mergelists(Node* arr[],int last)
{
        Node* res=arr[0];
        for(int i=1;i<=last;i++)
        {
            res=sortedmerge(res,arr[i]);
        }
        return res;
}

Node* newNode(int data)
{
    Node* temp=new  Node;
    temp->data=data;
    temp->next=NULL;
    return temp;
}
int main()
{
   int k=3;
   Node* arr[k];
   arr[0]=newNode(1);
   arr[0]->next=newNode(3);
   arr[0]->next->next=newNode(5);
   arr[0]->next->next->next=newNode(7);

   arr[1]=newNode(2);
   arr[1]->next=newNode(4);
   arr[1]->next->next=newNode(6);
   arr[1]->next->next->next=newNode(8);

   arr[2]=newNode(0);
   arr[2]->next=newNode(9);
   arr[2]->next->next=newNode(10);
   arr[2]->next->next->next=newNode(11);
   Node* head=mergelists(arr,k-1);
   printlists(head);
   return 0;
}
