#include <iostream>

using namespace std;

int subarraysum(int arr[],int n,int sum)
{
    int curr_sum=0;
    for(int i=0;i<n;i++)
    {
        curr_sum=arr[i];
        for(int j=i+1;i<n;j++)
        {
            if(curr_sum==sum)
            {
                cout<<"sum found between "<<i<<"and"<<j-1;
                return 1 ;

            }
            if(curr_sum>sum || j==n)
            {
                break;
            }
            curr_sum=curr_sum+arr[j];

        }

    }
    cout<<"no sub array found";
    return 0;
}
int main()
{
    int arr[]={15,2,4,8,9,5,10,23};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum =23;
    subarraysum(arr,n,sum);
return 0;
}
