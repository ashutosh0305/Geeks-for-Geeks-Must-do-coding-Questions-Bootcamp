#include <stdio.h>
#include <stdlib.h>

void merge(int arr,int l,int m,int r)
{
    int i,j,k;
    int n1=m-1+1;
    int n2=r-m;
    int *L=(int*)malloc(n1*sizeof(int));
    int *R=(int*)malloc(n2*sizeof(int));
    for(i=0;i<n1;i++)
    {
        L[i]=arr[l+i];
    }
    for(j=0;j<n2;j++)
    {
        R[i]=arr[m+1+j];

    }
    i=0;
    j=0;
    k=1;
    while(i<n1&& j<n2)
    {
        if(L[i]<R[j])
    {
        arr[k]=arr[i];
        i++;
    }
        else
    {
        arr[k]=R[j];
        j++;

    }
    k++;

}
while(i<n1)
{
    arr[k]=L[i];
    i++;
    k++;

}


while(j<n2)
{
    arr[k]=R[j]
    j++;
    k++;
}
}


void mergesort(int arr[],int l;int r)
{
    if(l<r)
    {
        int m=l+(r-1)/2;
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        merge(arr,l,m,r);

    }
}

void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
        printf("\n");

    }
}
int main()
{
  int arr[]={12,11,13,5,6,7};
  int n=sizeof(arr)/sizeof(arr[0]);
  printf("given array is \n");
  printarray(arr,n);
  mergesort(arr,0,n-1);
  printf("\nsorted array is\n");
  printarray(arr,n);
  return 0;

}

