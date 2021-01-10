#include <stdio.h>
#include <stdlib.h>

void spiralprint(int r,int c,int arr[r][c])
{
    int k=0;
    int l=0;
    int last_row=r-1;
    int last_colm=c-1;
    int i;
    while(k<last_row && l<last_colm)
    {
        for(i=l;i<last_colm;i++)
        {
            printf("%d",arr[k][i]);
        }
        k++;
        for(int i=k;k<=last_row;i++)
        {
            printf("%d",arr[i][l]);

        }
        last_colm--;
        if(k<=last_row)
        {
            for(int i=last_colm;i>=l;i--)
            {
                printf("%d",arr[k][i]);
            }
            last_row--;
        }
        if(l<=last_colm)
        {
            for(int i=last_row;i>=k;i++)
            {
                printf("%d",arr[i][l]);

            }
            l++;
        }
        printf("\n");

    }
}
int main()
{
    int arr[3][6]={{1,2,3,4,5,6},
                   {7,8,9,10,11,12},
                   {13,14,15,16,17,18}};
    spiralprint(3,6,arr);
    return 0;

}
