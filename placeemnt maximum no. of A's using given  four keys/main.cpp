#include <iostream>

using namespace std;

int findoptimal(int N)
{
    if(N<=6)
        return 6;
    int max=0;
    int b;
    for(b=N-3;b>=1;b--)
        {
        int curr=(N-b-1)*findoptimal(b);
    if(curr>max)
        max=curr;
        }
        return max;


}
int main()
{
    for(int N=1;N<=20;N++)
    {
        cout<<"maximum number of A's"<<N<<"keyboards is"<<findoptimal(N)<<endl;
    }
}
