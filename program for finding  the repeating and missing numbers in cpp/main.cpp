#include <iostream>

using namespace std;

void printtwoelements(int arr[],int n)
{
    cout<<"the repeating elements ";
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
                {
                cout<<arr[i];
                arr[i]=0;
                }
        }
    }


    cout<<"the missing element is ";
    int total=(n)*(n+1)/2;
        for(int i=0;i<n;i++)
        {
            total=total-arr[i];

        }
        cout<<total;

}
int main()
{
    int arr[]={7,3,4,5,5,6,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    printtwoelements(arr,n);
return 0;
}
