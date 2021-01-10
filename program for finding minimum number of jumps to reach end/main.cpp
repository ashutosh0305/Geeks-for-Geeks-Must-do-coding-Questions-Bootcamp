#include <iostream>

using namespace std;

int minjumps(int arr[],int l,int h)
{
    if(l==h)
        return 0;
    if(arr[l]==0)
        return INT_MAX;

    min_jump[]=new int[h];
    for(int i=1;i<=h;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(i<=j+arr[j])
            {
                min_jump[i]=min(min_jump[i],min_jump[j]+1 );
            }
        }
    }
    return min_jump;
}
int main()
{
    int arr[]={1,3,6,3,2,3,6,8,9,5};
    int n=sizeof(arr)/sizeof(int);
    cout<<"minimum number of jumps to reach end is"<<minjumps(arr,0,n-1);
    return 0;
}
