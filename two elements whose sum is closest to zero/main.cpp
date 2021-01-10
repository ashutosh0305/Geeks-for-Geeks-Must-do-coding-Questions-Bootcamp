#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;
void minabssumpair(int arr[],int arr_size)
{
    int l,r,min_sum,sum,min_l,min_r;
    if(arr_size<2)

    {
        cout<<"invalid input";
        return;

    }

    min_l=0;
    min_r=1;
    min_sum=arr[0]+arr[1];
    for(l=0;l<=arr_size-1;l++)
    {
        for(r=l+1;r<arr_size;r++)
        {
            sum=arr[l]+arr[r];
            if(abs(min_sum)>abs(sum))
            {
                min_sum=sum;
                min_l=l;
                min_r=r;
            }
        }
    }
    cout<<"the two elements whose sum is minimum are"<<arr[min_l]<<"and"<<arr[min_r];

}

int main()
{
    int arr[]={1,60,-10,70,-80,85};


    minabssumpair(arr,6);
    return 0;
}
