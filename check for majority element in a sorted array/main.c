#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

bool ismajority(int arr[],int n,int x)
{
    int count=0;
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            count=count+1;
        }
    }
    if(count>n/2)
    {
        return 1;
    }

  return 0;

}


int main()
{
    int arr[]={1,2,3,4,4,3,3,3,3};
    int  n=sizeof(arr)/sizeof(arr[0]);
    int x=3;
    if(ismajority(arr,n,x))
        printf("%d appears more then %dtimes in arr[]",x,n/2);
        else
            printf("%d does not appear more than %dtimes in arr[]",x,n/2);
    return 0;


}

