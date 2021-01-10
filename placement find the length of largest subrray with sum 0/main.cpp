#include <iostream>

using namespace std;
int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int maxlen(int arr[],int n)
{
    int max_len=0;
    for(int i=0;i<n;i++)
    {
        int curr_sum=0;
        for(int j=i;j<n;j++)
        {
            curr_sum=curr_sum+arr[j];
            if(curr_sum==0)
            {
                max_len=max(max_len,j-i+1);

            }
        }
    }
    return max_len;

}
int main()
{
    int arr[]={15,-2,2,-8,1,7,10,23};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"length of the longest 0 sumsubarray is"<<maxlen(arr,n);
    return 0;
}
