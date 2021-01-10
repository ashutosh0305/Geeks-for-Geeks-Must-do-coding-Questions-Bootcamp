#include <iostream>

using namespace std;

bool issubset(int arr1[],int arr2[],int m ,int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(arr2[i]==arr1[j])
                break;
        }
        if(j==m)
            return 0;
    }
return 1;


}

int main()
{
    int arr1[]={11,1,13,21,3,7};
    int arr2[]={11,3,7,13};
    int m=sizeof(arr1)/sizeof(arr1[0]);
    int n=sizeof(arr2)/sizeof(arr2[0]);
    if(issubset(arr1,arr2,m,n))
        cout<<"arr2[] is subset of arr1[]";
    else
        cout<<"arr1[] is not a subset of arr1[]";
    return 0;

}
