#include <iostream>

using namespace std;
void printkMax(int arr[],int n,int k)
{
    int i,max;
    for(i=0;i<=n-k;i++)
    {
        max=arr[i];
        int j =i;
        for(j=i;j<=i+2;j++)
        {
            if(arr[i]>max)
            {
                max=arr[i];

            }

        }
        cout<<max<<" ";
    }
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    printkMax(arr,n,k);
    return 0;
}
