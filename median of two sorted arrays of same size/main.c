#include <stdio.h>
#include <stdlib.h>
int getmedian(int ar1[],int ar2[],int n)
{
    int i=0;
    int j=0;
    int count=0;
    int m1=-1;
    int m2=-1;
    for(count=0;count<=n+1;count++)
    {
        if(i==n)
        {
            m1=m2;
            m2=ar2[0];
            break;
        }
        else if(j==n)
        {
            m1=m2;
            m2=ar1[0];
            break;
        }
        if(ar1[i]<ar2[j])
        {
            m1=m2;
            m2=ar1[i];
            i++;
        }
        else
        {
            m1=m2;
            m2=ar2[j];
            j++;
        }

    }
    return (m1+m2)/2;
}

int main()
{
   int ar1[]={1,12,15,26,38};
   int ar2[]={2,13,17,30,45};
   int n1=sizeof(ar1[0]);
   int n2=sizeof(ar2[0]);
   if(n1==n2)
    printf("median is %d" ,getmedian(ar1,ar2,n1));
   else
    printf("does not workfor arrays of unequal size");
   return 0;
}


