#include <iostream>

using namespace std;

int getmissingno(int arr[],int n)
{
    int total=(n+1)*(n+2)/2;
    for(int i=0;i<n;i++)
    {
        total=total-arr[i];
    }
    return total;

}
int main()
{
    int arr[]={1,2,4,5,6};
    int n=sizeof(arr[0]);
    int miss=getmissingno(arr,n);
    cout<<"missing umber is="<<miss;
    return 0;
}
