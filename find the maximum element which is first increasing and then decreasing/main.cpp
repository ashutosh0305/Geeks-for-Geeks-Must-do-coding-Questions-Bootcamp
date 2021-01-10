#include <iostream>

using namespace std;

int findmaximum(int arr[],int low,int high)
{
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];

        }
        else
            break;
    }
    return max;
}

int main()
{
    int arr[]={1,30,40,50,60,70,23,20};
    int n=intsizeof(arr)/intsizeof(arr[0]);
    cout<<"the maximum element is"<<findmaximum(arr,0,n-1);
    return 0;

}
