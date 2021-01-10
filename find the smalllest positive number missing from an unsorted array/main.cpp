#include <iostream>

using namespace std;


int findmissing(int arr[],int size)
{

}
int main()
{
    int arr[]={0,10,2,-10,20};
    int arr_size=sizeof(arr)/sizeof(arr[0]);
    int missing =findmissing(arr,arr_size);
    cout<<"the smallest postive missing number is";
    return 0;

}
