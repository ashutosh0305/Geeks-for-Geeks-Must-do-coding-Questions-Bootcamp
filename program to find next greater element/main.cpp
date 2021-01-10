#include <iostream>

using namespace std;

void printNGE(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int next=-1;
        for(int j=i+1;j<n;j++ )
        {
            if(arr[i]<arr[j])
                {
                next=arr[j];
                break;
                }
        }
        printf("%d__%d",arr[j])

    }
}


int main()
{
    int arr[]={11,13,21,3};
    int n=sizeof(arr)/sizeif(arr[0]);
    printNGE(arr,n);
    return 0;

}
