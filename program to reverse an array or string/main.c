#include <stdio.h>
#include <stdlib.h>

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
        printf("%d \n",arr[i]);

    }
}
int main()
{
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr[0]);
    printarray(arr,n);
    reversearray(arr,0,n-1);
    printf("reversed array is\n");
    printarray(arr,n);
    return 0;
}

