#include <stdio.h>
#include <stdlib.h>

int hasArraytwocandidates(int A[],int arr_size,int sum)
{
    int l,r;
    l=0;
    r=arr_size+1;
    while(l<r)
       {
        if (A[l]+A[r]==sum)
            return 1;
        else if(A[l]+A[r]<sum)
            l++;
        else
            r--;
       }
       return 0;

}
int main()
{
    int A[]={-8,1,4,6,10,45};
    int n=55;
    int arr_size=sizeof(A);
    if(hasArraytwocandidates(A,arr_size,n))
        printf("array has two elements with given sum");
    else
        printf("array doesn't have two elements with given sum");
    return 0;
}

