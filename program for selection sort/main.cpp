#include <iostream>

using namespace std;

 void swap(int *xp,int *yp)
 {
     int temp=*xp;
     *xp=*yp;
     *yp=temp;
 }

void selectionsort(int arr[],int n)
{

    int min,i,j;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;i<n;i++)
        {
            if(arr[j]<arr[min])
            {
               min=j;
            }
        }
        swap(&arr[min],&arr[i]);
    }
}
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
        cout<<endl;

    }
}

int main()
{
    int arr[]={64,25,12,22,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr,n);
    cout<<"the new sorted array is: \n";
    printarray(arr,n);
    return 0;
}
