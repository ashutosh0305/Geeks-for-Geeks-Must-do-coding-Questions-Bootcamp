#include <iostream>

using namespace std;
int positionrightmostsetbit(int n)
{
    int position=1;
    int m=1;
    while(n)
    {
        if(n&m)
            return position;
        n=n>>1;
        position++;

    }
    return position;
}
int main()
{
    int n=16;
    cout<<positionrightmostsetbit(n);
    return 0;
}
