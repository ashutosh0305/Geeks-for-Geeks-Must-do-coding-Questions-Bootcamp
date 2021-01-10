#include <iostream>

using namespace std;
int equillibrium(int arr[],int n)
{
    int left_sum=0;
    int right_sum=0;
    for(int i=0;i<n-2;i++)
    {
        left_sum=left_sum+arr[i];
        right_sum=0;
        for(int j=i+2;j<n;j++)
        {
            right_sum=right_sum+arr[j];

        }
        if(right_sum==left_sum)
        {
            return arr[i+1];

        }

    }
    return -1;
}

int main()
{
    int arr[]={1,3,5,2,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int z=equillibrium(arr,n);
    if(z==-1)
    {
        cout<<"there is not any equillibrium point ";

    }
    else
    {
        cout<<"the equillibrium point is "<<z;

    }
    return 0;


}
