#include <iostream>

using namespace std;

void subarrays(int arr[],int n,int sum)
{
    for(int i=0;i<n;i++)
    {
        int currentsum=arr[i];
        for(int j=i+1;j<=n;j++)
        {
            if(sum==currentsum)
                {
                    cout<<"sum found between the indexes"<<i<<"and"<<j-1;
                    return ;
                }


             if(currentsum<sum)
               {
                currentsum=currentsum+arr[j];
               }
        }
        if((currentsum!=sum) && (i==n))

        {
            cout<<"there is no any subarray";
            break;


        }

    }
}


int main()

{
    int arr[]={15,2,4,8,9,5,10,23};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=23;
    subarrays(arr,n,sum);
    return 0;
}
