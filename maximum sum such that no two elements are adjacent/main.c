#include <stdio.h>
#include <stdlib.h>

int findmaxsum(int arr[],int n)
{
    int incl=arr[0];
    int excl=0;
    int excl_new;
    int i=0;
     for(i=0;i<n;i++)
     {
         if(arr[i]+excl>incl)
        {
            excl_new=incl;
            incl=arr[i]+excl;
            excl=excl_new;

        }
        else
        {
          excl=arr[i]+excl_new;

        }
     }

return incl;
}


int main()
{
    int arr[]={4,1,1,4,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("%d ",findmaxsum(arr,n));
    return 0;

}
