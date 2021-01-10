#include <iostream>

using namespace std;
int postrightmostdiffbit(int m,int n)
{
    int counter=1;
    int mask=1;
    while((mask&m)==(n&mask))
    {
        mask=mask<<1;
        counter=counter+1;
    }
    return counter;
}

int main()
{
    int m=52,n=4;
    cout<<postrightmostdiffbit(m,n);
    return 0;

}
