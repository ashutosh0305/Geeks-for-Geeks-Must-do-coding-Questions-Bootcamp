#include <iostream>
#include <vector>

using namespace std;
int longestincreasingsubsequence(int arr[],int n)
{
    vector<int>v(n,0);
    int maximum,result=0;
    v[0]=1;
    for(int i=1;i<n;i++)
    {
    for(int j=0;j<i;j++)
    {
       if(arr[j]<arr[i])
            {
                v[i]=v[j]+1;
                maximum=v[i];
            }
    }
    result=max(maximum,result);
    }
    return result;
}
int main()
{
    int arr[]={2, 5, 3, 7, 11, 8};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"length of longest incresing subsequence is"<<longestincreasingsubsequence(arr,n)<<"\n";
    return 0;

}
