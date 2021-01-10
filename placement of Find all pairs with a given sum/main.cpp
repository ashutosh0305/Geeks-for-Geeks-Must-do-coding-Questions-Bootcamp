#include <iostream>
#include <unordered_set>
using namespace std;
void findpairs(int arr1[],int arr2[],int n,int m,int x)
{
    unordered_set<int>s;
    for(int i=0;i<n;i++)
    {
        s.insert(arr1[i]);

    }

    for(int i=0;i<m;i++)
    {
        if(s.find(x-arr2[i])!=s.end())
            cout<<x-arr2[i]<<" "<<arr2[i]<<endl;
    }
}

int main()
{
  int arr1[]={1,0,-4,7,6,4};
  int arr2[]={0,2,4,-3,2,1};
  int x=8;
  int n=sizeof(arr1)/sizeof(arr1[0]);
  int m=sizeof(arr2)/sizeof(arr2[0]);
  findpairs(arr1,arr2,n,m,x);
  return 0;
}
