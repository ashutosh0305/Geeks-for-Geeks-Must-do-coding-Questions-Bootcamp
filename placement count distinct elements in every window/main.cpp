#include <iostream>

using namespace std;
void countdistinct(int arr[],int n,int k)
{
    for(int i=0;i<=n-k;i++)
    {
        int distinct=0;

        for(int j=i;j<i+k;j++)
        {
            int z;
            for(z=i;z<j;z++)
            {
                if(arr[j]==arr[z])
                    break;

            }
                if(j==z)
                    distinct=distinct+1;
        }
        cout<<distinct<<" ";
    }
}
int main()
{
    int arr[]={1, 2, 4, 4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=2;
    countdistinct(arr,n,k);
    return 0;
}
