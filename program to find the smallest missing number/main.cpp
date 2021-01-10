#include <iostream>

using namespace std;

int findfirstmissing(int arr[],int start ,int end)
{
    if(start>end)
    {
        return end+1;

    }
    if(start!=arr[start])
    {
        return start;
    }
    int mid=(start+end)/2;
    if(arr[mid]==mid)
    {
        return findfirstmissing(arr,mid+1,end);
    }
    return findfirstmissing(arr,start,mid);
}

int main()
{
    int arr[]={0,1,2,3,4,5,6,7,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"smallest missing element is "<<findfirstmissing(arr,0,n-1);
    return 0;
}
