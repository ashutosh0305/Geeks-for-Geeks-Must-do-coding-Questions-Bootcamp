#include <iostream>
using namespace std;

int findmaxsubarray(int arr[],int n)
{
    int max_sofar=0,max_endinghere=0;
    for(int i=0;i<n;i++)
    {
       max_endinghere=max_endinghere+arr[i];
      if(max_sofar<max_endinghere)
        {
            max_sofar=max_endinghere;

        }
        if(max_endinghere<0)
        {
            max_endinghere=0;
        }
    }
    return max_sofar;
}
int main() {
	int arr[]={-2, -3, 4, -1, -2, 1, 5, -3};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"max subarray is "<<findmaxsubarray(arr,n);
	return 0;

}
