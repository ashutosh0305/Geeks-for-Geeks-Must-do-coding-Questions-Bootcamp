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
        printf("%d",arr[i]);

}


int main()
{
    int n,d;
    printf("enter the size of array");
    scanf("%d",&n);
    int arr[n];
    printf("enter the array ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the no.of rotations");
    scanf("%d",&d);
    leftrotate(arr,d,n);
    printarray(arr,n);
    return 0;
}


