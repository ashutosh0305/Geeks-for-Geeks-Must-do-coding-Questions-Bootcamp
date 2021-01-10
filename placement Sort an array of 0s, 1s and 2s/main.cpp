#include <iostream>

using namespace std;

void swap(int *x,int *y)
{
   int temp=*x;
   *x=*y;
   *y=temp;
}
int sort012(int arr[],int n)
{
    int high=n-1;
    int low=0;
    int mid=0;
    while(mid<=high)
    {
        switch(arr[mid])
        {
        case 0:
            {
            swap(&arr[mid],&arr[low]);
            mid++;
            low++;
            break;
            }

        case 1:
           {
            mid++;
            break;
           }
        case 2:
            {
             swap(&arr[mid],&arr[high]);
             high--;
             break;
            }

        }
    }
    return 0;

}
int printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    return 0;

}
int main()
{
    int arr[]={ 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"the unsorted array is"<<endl;
    printarray(arr,n);
    cout<<"now sorted array is"<<endl;
    sort012(arr,n);
    printarray(arr,n);
    return 0;


}
