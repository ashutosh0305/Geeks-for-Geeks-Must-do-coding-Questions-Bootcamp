#include <iostream>

using namespace std;

void reversearray(int arr[],int start,int end)
{
    while(start<end)
    {
    int temp=arr[end];
    arr[end]=arr[start];
    arr[start]=temp;
    start++;
    end--;
    }
}
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
        cout<<endl;

    }
}
int main()
{
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr[0]);
    printarray(arr,n);
    reversearray(arr,0,n-1);
    cout<<"reversed array is"<<endl;
    printarray(arr,n);
    return 0;
}

