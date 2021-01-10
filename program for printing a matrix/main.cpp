#include <iostream>

using namespace std;

void spiralprint(int arr[],int r ,int c)
{
    int k=0;
    int l=0;
    int last_row=r-1;
    int last_colm=c-1;
    int i;
    while(k<=last_row && l<=last_colm)
    {
        for(i=l;i<=last_colm;i++)
        {
            cout<<arr[k][i]);
            k++;
        }
        for(int i=k;k<=last_row;i++)
        {
            cout<<arr[i][l]);
            last_colm;;
        }
        if(k<=last_row)
        {
            for(int i=last_colm;i>=l;i--)
            {
                cout<<arr[k][i]);
                last_row--;
            }
        }
        if(l<=last_colm)
        {
            for(int i=last_row;i>=k;i++)
            {
                cout<<arr[i][l]);
                l++;

            }
        }

    }
}
int main()
{
    int arr[r][c]={{1,2,3,4,5,6},
                   {7,8,9,10,11,12},
                   {13,14,15,16,17,18}};
    spiralprint(arr,r,c);
    return 0;

}
