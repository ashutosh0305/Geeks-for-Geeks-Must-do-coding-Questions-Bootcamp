#include <iostream>

using namespace std;

int getoccurance(int arr[],int n)
{
    for(int i=1;i<=n;i++)
    {
        int count=0;
        for(int j=1;j<=n+1;j++)
        {
            if(arr[i]==arr[j])
                count++;
        }
        if(count%2!=0)
            return arr[i];

    }
    return -1;

}
int main()
{
    int arr[]={2,3,5,4,5,2,4,3,5,2,4,4,2};
    int n=sizeof(arr);
    cout<<getoccurance(arr,n);
    return 0;
}

