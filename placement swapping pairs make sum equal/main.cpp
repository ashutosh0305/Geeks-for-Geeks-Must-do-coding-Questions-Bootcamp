#include <iostream>
#include <algorithm>

using namespace std;
int getsum(int c[],int k)
{
    int nsum=0;
    for(int i=0;i<k;i++)
        nsum=nsum+c[i];
    return nsum;
}
int gettarget(int sum1,int sum2)
{
    int newtarget=sum1-sum2;
    if(newtarget%2!=0)
        return 0;
    return (newtarget/2);
}
void findswapvalues(int A[],int n,int B[],int m)
{
    sort(A,A+n);
    sort(B,B+m);
    int sum1=getsum(A,n);
    int sum2=getsum(B,m);
    int target=gettarget(sum1,sum2);
    if(target==0)
    {
        return;

    }
    int i=0;
    int j=0;
    while(i<n &&  j<n)
    {
       int diff=A[i]-B[j];
        if(diff==target)
        {
            cout<<A[i]<< " "<<B[j];
            return;

        }
        else if(diff<target)
            i++;
        else
            j++;
    }

}
int main()
{
  int A[]={4,1,2,1,1,2};
  int n=sizeof(A)/sizeof(A[0]);
  int B[]={1,6,3,3};
  int m=sizeof(B)/sizeof(B[0]);
  findswapvalues(A,n,B,m);
  return 0;
}
