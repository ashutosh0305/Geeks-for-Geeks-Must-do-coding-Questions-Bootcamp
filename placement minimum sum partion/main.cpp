#include <iostream>
#include <cstdlib>


using namespace std;
int findmin(int arr[],int n)
{
  int sum=0;
  for(int i=0;i<n;i++)
  {
      sum+=arr[i];

  }
  int hsum=sum/2;
  bool dp[n+1][hsum+1];
  for(int i=0;i<=n;i++)
    for(int j=0;j<=hsum;j++)
    {
        if(i==0)
        {
            dp[i][j]=true;
        }
        else if(i==0&& j>0)
        {
            dp[i][j]=false;
        }
        else
        {
            if(i>j)
                dp[i][j]=dp[i-1][j];
            else
            {
                dp[i][j]=dp[i-1][j]+dp[i-1][j-arr[i-1]];
            }
        }
    }
    int lastrow=n-1;
    int firstpartition=-1;
    for(int i=hsum;hsum>0;i--)
    {
        if(dp[lastrow][i])
        {
            firstpartition=i;
            break;
        }
    }
    int secondpartition=sum-firstpartition;
    int diff= abs(firstpartition-secondpartition);
    return diff;
}
int main()
{
     int arr[]={1, 6, 11, 5};
     int n=sizeof(arr)/sizeof(arr[0]);
     cout<<"the minimum difference between two sets is"<<findmin(arr,n);
     return 0;
}
