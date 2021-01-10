#include <iostream>

using namespace std;

int subarraysum(int arr[],int n,int sum)
{
    int curr_sum,i,j;
    for(int i=0;i<n;j++)
    {
        curr_sum=arr[i];
        for(int j=i+1;j<n;j++)
        {
            if(curr_sum==sum)
            {
                cout<<"sumfound between indexes"<<i<<"and"<<j-1;
                return 1;

            }
            if(curr_sum>sum||j==n)
            {
                break;
            }
            curr_sum=curr_sum+arr[j];

        }
    }
}


int main()
{
    int arr[]={15,2,4,8,9,5,10,23};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=23;
    subarraysum(arr,n,sum);
    return 0;
}
