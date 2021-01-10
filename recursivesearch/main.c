#include <stdio.h>
#include <stdlib.h>
int recsearch(int arr[],int l,int r,int x)
{
    if(r<l)
        return -1;
    if(arr[l]==x)
        return l;
    if(arr[r]==x)
        return r;
    return recsearch(arr,l+1,r-1,x);
}
int main()
{

int arr[]={12,34,54,3,2};
int n=sizeof(arr[0]);
int x=2;
int index=recsearch(arr,0,n,x);
if(index!=-1)
    printf("element %d is present at index %d",x,index);
else
    printf("element %d is not present ",x);
return 0;
}
