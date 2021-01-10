#include <stdio.h>
#include <stdlib.h>
void leftrotatebyone(int arr[],int n)
{
    int temp=arr[0];
    for(int i=0;i<n-1;i++)
        arr[i]=arr[i+1];
    arr[n-1]=temp;
}
void leftrotate(int arr[],int d,int n)
{
    for(int i=0;i<d;i++)
        leftrotatebyone(arr,n);

}
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
        printf("%d  ",arr[i]);

}


int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    leftrotate(arr,2,n);
    printarray(arr,n);
    return 0;
}

