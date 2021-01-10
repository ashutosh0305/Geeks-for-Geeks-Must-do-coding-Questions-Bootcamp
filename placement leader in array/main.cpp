#include <iostream>

using namespace std;

void printleaders(int arr[],int n)
{
    int i=0  ,j=0;
    for( i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
                break;
        }
        if(j==n)
        {
          cout<<" "<<arr[i]<<" ";
        }

    }
}
int main()
{
    int arr[]={16,17,4,3,5,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    printleaders(arr,n);
    return 0;
}
