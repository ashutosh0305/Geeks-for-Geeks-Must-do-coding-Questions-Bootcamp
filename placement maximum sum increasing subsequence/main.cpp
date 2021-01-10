#include <iostream>

using namespace std;
int maxsumis(int arr[],int n)
{
    int msis[n];
    for(int i=0;i<n;i++)
    {
        msis[i]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
     for(int j=0;j<i;j++)
     {
         if(arr[j]<arr[i])                              /*if(arr[j]<arr[i]&&msis[i]<msis[j]+arr[i]*/
         {
             msis[i]=max(msis[i],msis[j]+arr[i]);
         }
     }
    }

    int a=msis[0];
    for(int i=1;i<n;i++)
    {
        if(a<msis[i])
        {
            a=msis[i];
        }
    }
    return a;
}
int main()
{
    int arr[]={10, 5, 4, 3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"sum of maximum sum increasing subsequence is"<<maxsumis(arr,n)<<endl;
    return  0;
}

