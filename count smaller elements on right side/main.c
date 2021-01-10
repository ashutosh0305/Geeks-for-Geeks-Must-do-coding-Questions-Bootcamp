#include <stdio.h>
#include <stdlib.h>

void printarray(int [],int );
void constructlowerarray(int arr[],int n)
{
    int *low=(int*)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
                low[i]++;
        }
    }
    printarray(low,n);
}
void printarray(int *low,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",low[i]);
        printf("\t");



    }
}
int main()
{
    int arr[]={12,10,5,4,2,20,6,1,0,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    constructlowerarray(arr,n);
    return 0;

}
