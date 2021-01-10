#include <iostream>

using namespace std;
int istriplet(int arr[],int n)
{
    for(int i=0;i<n-2;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                int x=arr[i]*arr[i];
                int y=arr[j]*arr[j];
                int z=arr[k]*arr[k];
                if(x==y+z||y==x+z||z==x+y)
                {
                    return 1;
                }
            }
        }

    }
    return 0;
}

int main()
{
    int arr[]={3,1,4,6,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int m=istriplet(arr,n);
    if(m)
    {
        cout<<"true";

    }
    else
    {
        cout<<"false";
    }
    return 0;
}
