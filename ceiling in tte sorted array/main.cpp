#include <iostream>

using namespace std;

int ceilsearch(int arr[],int low,int high,int x)
{
    int mid;
    if(x<=arr[low])
        return low;
    if(x>arr[high])
        return -1;
    mid=(low+high)/2;
    if(arr[mid]==x)
    {
        return mid;
    }
    else if(arr[mid]<x)
    {
        if(mid+1<=high && x<=arr[mid+1])
            return mid+1;
        else
            return ceilsearch(arr,mid+1,high,x);

    }
    else
    {
        if(mid-1>=low && x>arr[mid-1])
            return mid;
        else
            return  ceilsearch(arr,low,mid-1,x);

    }


}

int main()
{
    int arr[]={1,2,8,10,10,12,19};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=2;
    int index=ceilsearch(arr,0,n-1,x);
    if (index==-1)
    {
        cout<<"ceiling of"<<x<<"does not exist";
    }
    else
     {
        cout<<"ceiling of"<<x<<"is"<<arr[index];

     }
    return 0;

}

