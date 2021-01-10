#include <iostream>
#include <string.h>

using namespace std;

int lcs(char *x,char *y,int m,int n)
{
    int L[m+1][n+1];

    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0||j==0)
            {
                L[i][j]=0;

            }
            else if(x[i-1]==y[j-1])
                L[i][j]=L[i-1][j-1]+1;
            else
                L[i][j]=max(L[i-1][j],L[i][j-1]);
        }
    }
    return L[m][n];
}
int max(int a,int b)
{
    return (a>b)?a:b;
}
int shortestsequence(char *x,char *y)
{
    int m=strlen(x),n=strlen(y);
    int l=lcs(x,y,m,n);
    return (m+n-l);
}

int main()
{
   char x[]="AGGTAB";
   char y[]="GXTXAYB";
   cout<<":length of the shortest supersequence is"<<shortestsequence(x,y)<<endl;
   return 0;
}
