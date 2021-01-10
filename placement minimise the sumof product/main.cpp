#include <iostream>
#include <algorithm>

using namespace std;
int minvalue(int A[],int B[],int n )
{
    int sum=0;
   sort(A,A+n);
   sort(B,B+n,greater<int>());
   for(int i=0;i<n;i++)
   {
       sum=sum+A[i]*B[i];
   }
   return sum;
}

int main()
{
    int A[]={3,1,1};
    int B[]={6,5,4};
    int n=sizeof(A)/sizeof(A[0]);
    cout<<minvalue(A,B,n)<<endl;
    return 0;
}
