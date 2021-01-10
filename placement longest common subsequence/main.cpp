#include <iostream>
#include <string.h>

using namespace std;
int lcs(char x[],char y[],int m,int n)
{
    int LCS[m+1][n+1];
for(int i=0;i<=m;i++)
{
    for(int j=0;j<=n;j++)
    {
        if(i==0||j==0)
        {
            LCS[i][j]=0;
        }
        else if(x[i-1]==y[j-1])
            LCS[i][j]=LCS[i-1][j-1]+1;
        else
            LCS[i][j]=max(LCS[i][j-1],LCS[i-1][j]);

    }

}
return LCS[m][n];
}
int max(char a,char b)
{
    return (a>b)?a:b;
}
int main()
{
  char x[]="AGGTAB";
  char y[]="GXTXAYB";
  int m=strlen(x);
  int n=strlen(y);
  cout<<"length of LCS is"<<lcs(x,y,m,n);
  return 0;
}
