#include <iostream>

using namespace std;
void printnge(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                cout<<arr[i]<<"next greater element"<<arr[j]<<endl;
                break;
            }
        }
        cout<<arr[i]<<"next greater element "<<-1<<endl;



    }
}



int main()
{
    int arr[]={11,13,21,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    printnge(arr,n);
    return 0;
}
