#include <iostream>

using namespace std;

int recsearch(int arr[],int l,int r,int x)
{
    if(r<l)
    {
        return -1;
    }
    if(arr[l]==x)
        return l;
    if(arr[r]==x)
        return r;
     return recsearch(arr,l+1,r-1,x);
}
int main()
{
    int arr[]={12,34,54,2,3};
    int n =sizeof(arr[0]);
    int x=34;
    int index=recsearch(arr,0,n,x);
    if(index!=-1)
        cout<<"element "<<x<<"is present at index"<<index;
    else
        cout<<"element is not present in this array";
    return 0;
}


