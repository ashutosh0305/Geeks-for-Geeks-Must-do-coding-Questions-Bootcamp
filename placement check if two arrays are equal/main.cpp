#include <iostream>
#include <unordered_map>
using namespace std;

bool areequal(int arr1[],int arr2[],int n,int m)
{

    if(n!=m)
        return false;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[arr1[i]]++;
    }
    for(int i=0;i<m;i++)
    {
        if(mp.find(arr2[i])==mp.end())
            return false;
        if(mp[arr2[i]]==0)
            return false;
        mp[arr2[i]]
        --;

    }
    return true;

}
int main()
{
int arr1[]={1,7,1};
int arr2[]={7,7,1};
int n=sizeof(arr1)/sizeof(arr1[0]);
int m=sizeof(arr2)/sizeof(arr2[0]);
if(areequal(arr1,arr2,n,m))
{
    cout<<"yes";

}
else
    cout<<"no";
return 0;
}

