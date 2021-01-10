#include <iostream>

using namespace std;

int linearsearch(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==i)
        {
            return i;

        }
    }
    return -1;

}
int main()
{
    int arr[]={-10,-1,0,3,10,11,30,50,100};
    int  n=sizeof(arr)/sizeof(arr[0]);
    cout<<"fixed point is"<<linearsearch(arr,n);
    return 0;

}

