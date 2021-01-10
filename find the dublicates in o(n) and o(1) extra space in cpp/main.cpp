#include <iostream>
#include <stdlib.h>

using namespace std;

void printrepeating(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(abs(arr[i])>=0)
        {
            arr[abs(arr[i])]=-arr[abs(arr[i])];

        }
        else
        {
            cout<<abs(arr[i])<<" ";

        }

    }
}



int main()
{
    int arr[]={1,2,3,1,3,6,6};
    int arr_size=sizeof(arr)/sizeof(arr);
    printrepeating(arr,arr_size);
    return 0;


}
