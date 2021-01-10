#include <iostream>

using namespace std;

int rearrange(int arr[],int prr[],int n)
{
    for(int i=0;i<n;i++)
    {
        arr[i]=prr[prr[i]];

    }
    return 0;

}
int printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];

    }
    return 0;

}
int main()
{
    int arr[]={3,2,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int prr[n];
    for(int i=0;i<n;i++)
    {
        prr[i]=arr[i];
    }

    cout<<"given array is \n";
    printArray(arr,n);
    cout<<endl;
    rearrange(arr,prr,n);
    cout<<"modified array is";
    printArray(arr,n);
return 0;


}
