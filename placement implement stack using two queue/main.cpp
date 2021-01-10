#include <iostream>
#include <queue>

using namespace std;

class stack
{
queue <int> s1,s2;
int curr_size;
public:
    stack()
    {
        curr_size=0;
    }
    void push(int k)
    {
        curr_size++;
        s1.push(k);
    }
    void pop()
    {
       if(s1.empty())
       {
           return ;
       }
       while(s1.size()!=1)
       {
           s2.push(s1.front());
           s1.pop();

       }
       s1.pop();
    queue <int> q=s2;
    s2=s1;
    s1=q;
    curr_size--;


    }
    int top()
    {
        if(s1.empty())
        {
            return -1;
        }
        while(s1.size()!=1)
        {
            s2.push(s1.front());
            s1.pop();
        }
       int temp=s1.front();
        s1.pop();
        s2.push(temp);
        queue <int> q=s1;
        s1=s2;
        s2=q;
    return temp;
    }
int size()
{
    return curr_size;
}


};
int main()
{
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout<<"current size"<<s.size()<<endl;
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    cout<<"current size:"<<s.size()<<endl;
    return 0;
}
