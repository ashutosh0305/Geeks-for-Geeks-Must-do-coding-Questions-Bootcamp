#include <stdio.h>
#include<conio.h>

int largest(int arr[],int n)
{
    int i;
    int max=arr[0];
    for(i=1;i<=n;i++)
    {
        if(arr[i]>max)
            max=arr[i];

    }
    return max;
}
int main()
{
    int arr[]={10,324,45,90,9808};
    int n=sizeof(arr[0]);
    printf("largest in given array is%d",largest(arr,n));
    return 0;
}
