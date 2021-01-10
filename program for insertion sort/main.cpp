#include <iostream>

using namespace std;

void insertion_sort(int arr[],int n)
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        temp=arr[i];
        for(j=i-1;j>=0&&temp<arr[j];j--)
        {
           arr[j+1]=arr[j];
        }
        arr[j+1]=temp;
    }

}

int main()
{
    int arr[]={23,45,434,78,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
        cout<<"\n";

    }
    return 0;

}

