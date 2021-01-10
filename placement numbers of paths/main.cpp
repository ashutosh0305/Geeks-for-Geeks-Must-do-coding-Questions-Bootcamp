#include <iostream>

using namespace std;
int numberofpaths(int m,int n)
{
    if(m==0 && n==0)
    {
        return 0;
    }
    if(m==1||n==1)
        return 1;
    return numberofpaths(m-1,n)+numberofpaths(m,n-1);

}
int main()
{
    cout<<numberofpaths(2,2);
    return 0;
}
