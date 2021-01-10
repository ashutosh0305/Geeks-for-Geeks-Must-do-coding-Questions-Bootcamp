#include <iostream>

using namespace std;

int main()
{

    int A[3][3],B[3][3],C[3][3],i,sum,k,j;
    cout<<"enter 9 elements of your matrix A";
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
    {
        cin>>A[i][j];
    }
    cout<<"enter 9 elements of your matrix B";
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
    {
        cin>>B[i][j];
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
            cout<<" "<<C[i][j];
        }
        cout<<"\n";
    }
    return 0;
}
