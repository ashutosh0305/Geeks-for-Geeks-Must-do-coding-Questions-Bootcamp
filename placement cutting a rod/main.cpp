#include <iostream>

using namespace std;
int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
        return b;
}
int cutrod(int arr[],int n)
{
    int T[n+1][n+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0 ||j==0)
            {
                T[i][j]=0;

            }
            else if(i>j)
            {
                T[i][j]=T[i-1][j];

            }
            else{
                T[i][j]=max(T[i-1][j],(arr[i-1]+T[i][j-i]));

            }
        }
    }
    return T[n][n];
}
int main()
{
    int arr[]={3,5,8,9,10,17,17,20};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"maximum obtainable value is"<<cutrod(arr,size);
    return 0;
}
