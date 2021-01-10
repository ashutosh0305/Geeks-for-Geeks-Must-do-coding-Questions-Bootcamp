#include <iostream>
#include <stack>

using namespace std;
class Mystack
{
    stack <int> s1,s2;
    int minele;
public:

void peek()
{
    int a=s1.top();
    cout<<"the topmost element is :"<<a<<endl;
}
void pop()
{
    int z=s1.top();
    s1.pop();
    cout<<"top most removed element in the stack is:"<<z<<endl;;
}

void push(int x)
{
    s1.push(x);
    cout<<"Number inserted:"<<x<<endl;

}
void getmin()
{
    while(!s1.empty())
    {
        s2.push(s1.top());
        if(minele==0)
            {
                minele=s1.top();
            }

        if(s1.top()<minele)
            {
                minele=s1.top();
            }
        s1.pop();
    }
        cout<<"minimum element the stack is:"<<minele<<endl;
        minele=0;
    while(!s2.empty())
    {
        s1.push(s2.top());
        s2.pop();
    }


}
};
int main()
{
    Mystack s;
    s.push(3);
    s.push(5);
    s.getmin();
    s.push(2);
    s.push(1);
    s.getmin();
    s.pop();
    s.getmin();
    s.pop();
    s.peek();
    return 0;

}
