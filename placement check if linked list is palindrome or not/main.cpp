#include <iostream>
#include <stack>


using namespace std;
class Node
{
public:
    int data;
    Node(int d)
    {
        data=d;

    }
    Node* ptr;
};
int ispalin(Node*head)
{
    Node* slow=head;
    stack <int> s;
    while(slow!=NULL)
    {
        s.push(slow->data);
        slow=slow->ptr;

    }
    while(head!=NULL)
    {
        int i=s.top();
        s.pop();
        if(head->data!=i)
        {
            return 0;
        }
        head=head->ptr;
    }
    return 1;

}

int main()
{
Node one(1);
Node two(2);
Node three(3);
Node four(6);
Node five(1);

five.ptr=NULL;
one.ptr=&two;
two.ptr=&three;
three.ptr=&four;
four.ptr=&five;
Node* temp=&one;
int result=ispalin(temp);
if(result==1)
    cout<<"ispalindrome istrue\n";
else
    cout<<"ispalindrome is not  true\n";
return 0;

}
