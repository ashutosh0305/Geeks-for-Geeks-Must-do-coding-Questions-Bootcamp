#include <iostream>

using namespace std;
bool issubsetsum(int arr[],int n,int sum)
{
    bool T[n+1][sum+1];
   for(int i=0;i<=n;i++)
   {
       for(int j=0;j<=sum;j++)
       {
           if(i==0 && j==0)
           {
               T[i][j]=true;

           }
           else if(i==0 && j>0)
           {
               T[i][j]=false;
           }
           else
           {
               if(j<arr[i-1])
               {
                   T[i][j]=T[i-1][j];

               }
               else
               {
                   T[i][j]=T[i-1][j]+T[i-1][j-arr[i-1]];
               }
           }
       }
   }
   return T[n][sum];
   }

int main()
{
   int arr[]={1, 8, 2, 5};
   int sum=4;
   int n=sizeof(arr)/sizeof(arr[0]);
   if(issubsetsum(arr,n,sum)==true)
        cout<<"there exists a subset with given sum";
   else
        cout<<"no subset exists with given sum";
   return 0;
}
