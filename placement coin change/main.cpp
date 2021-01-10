#include <iostream>

using namespace std;
int count(int arr[],int m,int n)
{
    int T[n+1][n+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0 && j==0)
            {

                T[i][j]=1;

            }
            else if(i==0 && j>0)
            {
                T[i][j]=0;
            }
            else
            {
                if(i>j)
                {
                    T[i][j]=T[i-1][j];

                }
                else
                {
                    T[i][j]=T[i-1][j] +T[i][j-i];
                }
            }

        }
    }
    return T[n][m];
}

int main()
{
int arr[]={1,2,3};
int m=sizeof(arr)/sizeof(arr[0]);
int n=4;
cout<<count(arr,m,n);
return 0;

}
