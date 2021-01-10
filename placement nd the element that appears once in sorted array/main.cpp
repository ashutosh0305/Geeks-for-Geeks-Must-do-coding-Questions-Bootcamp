#include <iostream>

using namespace std;
int search(int arr[],int low,int high)
{
    int mid;
    if(high==0)
        return arr[0];
    else if(arr[0]!=arr[1])
        return arr[0];
    else if(arr[high]!=arr[high-1])
        return arr[high];
    while(low<=high)
    {
        mid=low + (high-low)/2;
        if(arr[mid]!=arr[mid+1] && arr[mid]!=arr[mid-1])
            return arr[mid];
        if(((mid%2)==0 && arr[mid]==arr[mid+1])
           ||((mid%2)==1 && arr[mid]==arr[mid-1]))
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }

    }
    return -1;

}
int main()
{
 int arr[]={1,1,2,2,3,4,4};
 int len=sizeof(arr)/sizeof(arr[0]);
 cout<<search(arr,0,len-1);
 return 0;

}
