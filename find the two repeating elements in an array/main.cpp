#include <iostream>

using namespace std;

void printrepeating(int arr[],int n)
{
    int i,j;
    cout<<"repeating elements are";
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
    {
        if(arr[i]==arr[j])
        {
            cout<<arr[i]<<" ";

        }
    }
}

int main()
{
    int arr[]={4,2,4,5,2,3,1};
    int arr_size=sizeof(arr)/sizeof(arr[0]);
    printrepeating(arr,arr_size);
    return 0;

}
