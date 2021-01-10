#include <iostream>

using namespace std;

void sort(int arr[],int n)
{
    int round,i,temp;
    for(round=1;round<=n-1;round++)
         {
         for(i=0;i<=n-1-round;i++)
            {
                if(arr[i]>arr[i+1])
                {
                    temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
                }
            }

         }

}
void reverse(int arr[],int n)
{
    int temp;
    int i=0;
    int j=n-1;
    while(i<j)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}


void klargest(int arr[],int n,int k)
{
    sort(arr,n);
    reverse(arr,n);
    for(int i=0;i<k;i++)
       cout<<arr[i]<<" ";
}




int main()
{
    int arr[]={89,3,12,9,30,2,30,67,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    klargest(arr,n,k);

}
