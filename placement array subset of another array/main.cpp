#include <iostream>
#include <set>

using namespace std;

bool issubset(int arr1[],int arr2[],int m,int n)
{
    set<int> s;
    for(int i=0;i<m;i++)
        s.insert(arr1[i]);
    for(int j=0;j<n;j++)
    {
        if(s.find(arr2[j])==s.end())
            return false;
    }
    return true;
}
int main()
{
    int arr1[]={10,5,2,13,19};
    int arr2[]={19,5,3};
    int m=sizeof(arr1)/sizeof(arr1[0]);
    int n=sizeof(arr2)/sizeof(arr2[0]);
    if(issubset(arr1,arr2,m,n))
        cout<<"arr2[] is subset of arr1[]";
    else
        cout<<"arr2 is not subset of arr2[]";
    return 0;

}
