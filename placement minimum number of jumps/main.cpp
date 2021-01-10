#include <iostream>
#include <array>

using namespace std;
int minjumps(int arr[],int n)
{
    if(n==0||arr[0]==0)
        return 0;
    array<int,n>jump;
    jump[0]=0;
    for(int i=1;i<n;i++)
    {
        jump[i]=INT_MAX;
        for(int j=0;j<i;j++)
            if(i<=arr[j]+j)
        {
            jump[i]=min(jump[i],jump[j]+1);
            break;
        }
    }
    return jump[n-1];
}
int main()
{
    int arr[]={1,3,6,1,0,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"minimum number of jumps to reach end is"<<minjumps(arr,n);
    return 0;
}
