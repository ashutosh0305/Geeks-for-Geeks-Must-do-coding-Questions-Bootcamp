#include <iostream>

using namespace std;
void swap(char*x,char*y)
{
    char temp=*x;
    *x=*y;
    *y=temp;
}

void permute(string str,int i,int n)
{

    int static count=0;
    if(i==n)
    {
      count++;
      cout<<str<<endl;

    }
    else
    {
        for(int j=i;j<=n;j++)
        {
            swap(str[i],str[j]);
            permute(str,i+1,n);
            swap(str[i],str[j]);

        }
    }
}
int main()
{
    string str="ABC";
    int n=str.length();
    permute(str,0,n-1);
    return 0;

}
