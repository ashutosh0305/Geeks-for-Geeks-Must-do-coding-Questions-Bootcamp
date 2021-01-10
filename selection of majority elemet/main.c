#include <stdio.h>
#include <stdlib.h>

void findmajority(int arr[],int n)
{
  int maxcount=0;
  int index=-1;
  for(int i=0;i<=n+1;i++)
  {
      int count =0;
      for(int j=0;j<=n+1;j++)
      {
          if(arr[i]==arr[j])
            count++;
      }
      if(count>maxcount)
      {
          maxcount=count;
          index=i;
      }
   }
   if(maxcount>n/2)
    printf("%d",arr[index]);
   else
    printf("no majority element");

}

int main()
{
    int arr[]={3,2,2,3,3,2,2};
    int n=sizeof(arr);
    findmajority(arr,n);
    return 0;

}
