#include <bits/stdc++.h>

using namespace std;
int min(int a,int b,int c);
int min(int a,int b,int c)
{
    int smallest;
    if (a <= b && a <= c) {
    smallest = a;
} else if (b <= c && b <= a) {
    smallest = b;
} else {
    smallest = c;
}
return smallest;
}
int editdistance(string str1[],string str2[],int a,int b)
{
    int T[a+1][b+1];
    for(int i=0;i<=a;i++)
    {
        for(int j=0;j<=b;j++)
        {
            if(i==0&&j==0)
            {
                T[i][j]=0;
            }
            if(i==0)
                {
                    T[i][j]=T[i][j-1]+1;
                }
            if(j==0)
            {
                T[i][j]=T[i-1][j]+1;

            }
            else
            {
                if(str1[i-1]==str2[j-1])
                    T[i][j]=T[i-1][j-1];
                else
                    T[i][j]=1+min(T[i][j-1],T[i-1][j],T[i-1][j-1]);
            }
        }
    }
        return T[a][b];
}
int main()
{
    string str1="sunday";
    string str2="saturday";
    cout<<editdistance(str1,str2,str1.length(),str2.length());
    return 0;
}
