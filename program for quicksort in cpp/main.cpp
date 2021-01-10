#include <iostream>

using namespace std;
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void printarray(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<< endl;
}
int partition(int arr[],int l,int h)
{
  int pivot=arr[h];
  int i=l-1;
  for(int j=l;j<=h-1;j++)
  {
      if(arr[j]<pivot)
      {
          i++;
          swap(&arr[i],&arr[j]);
      }
      swap(&arr[i+1],&arr[h]);
  }
  return i+1;
}
void quicksort(int arr[],int l,int h)
{
    if(l<h)
    {
        int j= partition(arr,l,h);
       quicksort(arr,l,j-1);
       quicksort(arr,j+1,h);
    }
}



int main()
{
    int arr[]={10,7,8,9,1,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,n-1);
    cout<<"the new sorted array is";
    printarray(arr,n);
    return 0;

}



