#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int A[3][3],B[3][3],C[3][3],i,sum,k,j;
    printf("enter 9 elements of your matrix A");
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
        {
            scanf("%d",&A[i][j]);
        }
    printf("enter 9 elements of your matrix B");
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
    {
        scanf("%d",&B[i][j]);
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            sum=0;
           for(k=0;k<=2;k++)
            sum=sum+A[i][k]*B[k][j];
           C[i][j]=sum;
        }
    }
    for(i=0;i<=2;i++)
        {
            for(j=0;j<=2;j++)
                {
                   printf("%d  ",C[i][j]);
                }
                printf("\n");
        }
         return 0;


}
