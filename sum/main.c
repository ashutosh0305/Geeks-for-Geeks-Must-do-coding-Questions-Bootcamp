#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int sum(int arr[],int n)
{

    int sum=0;
    for(int i=0;i<n;i++)
    sum=sum+arr[i];
    return sum;
}
int main()
{
    int arr[]={12,3,4,15};
    int n=sizeof(arr[0]);
    printf("sum of given array is %d",sum(arr,n));
    return 0;
}

