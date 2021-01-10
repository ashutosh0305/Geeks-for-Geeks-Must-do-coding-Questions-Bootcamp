#include <iostream>

using namespace std;

int binarysearch(int arr[],int l,int r,int x)
{
    if(l<=r)
    {
        int mid=(l+r)/2;
        if(arr[mid]==x)
            return mid;
        if(arr[mid]<x)
            return binarysearch(arr,mid+1,r,x);
        else
            return binarysearch(arr,l,mid-1,x);

    }
    return -1;
}
int main()
{
 int arr[]={2,3,4,10,40};
 int n=sizeof(arr)/sizeof(arr[0]);
 int x=10;
 int result=binarysearch(arr,0,n-1,x);
 if(result==-1)
 {
     cout<<"element is not present int the array ";
 }
 else
 {
     cout<<"element is present in array at the location"<<result+1;

 }
 return 0;
}
