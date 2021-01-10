#include <iostream>

using namespace std;
void iskthbitset(int n,int k)
{
    if(n&(1<<(k-1)))
        cout<<"SET";
    else
        cout<<"Notset";

}
int main()
{
    int n=5,k=1;
    iskthbitset(n,k);
    return 0;
}
