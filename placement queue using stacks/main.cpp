#include <iostream>
#include <stack>

using namespace std;

class queue
{
stack <int> s1,s2;
public:
void enqueue(int k)
{
    s1.push(k);
}
int dequeue()
{
    if(s2.empty())
    {
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }

    }
    int x=s2.top();
    s2.pop();
    return x;
}
};

int main()
{
    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    return 0;
}
