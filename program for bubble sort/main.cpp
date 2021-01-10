#include <iostream>

using namespace std;

void bubble_sort(int arr[],int n)
{
    for(int round=1;round<=n-1;round++)
    {
        for(int i=0;i<=n-1-round;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
}
int main()
{
    int arr[]={34,15,29,8};
    int i;
    bubble_sort(arr,4);
    for(i=0;i<=3;i++)
    {
        cout<<arr[i];
        cout<<endl;

    }
    return 0;

}
