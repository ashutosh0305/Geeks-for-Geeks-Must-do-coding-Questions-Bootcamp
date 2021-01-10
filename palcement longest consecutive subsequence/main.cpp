#include <iostream>
#include <set>
using namespace std;
int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int findlongestconseqsubseq(int arr[],int n)
{
    set<int > s;
    for(int i=0;i<n;i++)
    {
        s.insert(arr[i]);

    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int j=arr[i];
        if(s.find(j-1)==s.end())
           while(s.find(j)!=s.end())
            j++;
        ans=max(j-arr[i],ans);
    }
    return ans;
}
int main()
{
    int arr[]={1,9,3,10,4,20,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"length of the longest contiguous subsequence is"<<findlongestconseqsubseq(arr,n);
    return 0;
}
