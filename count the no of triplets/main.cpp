#include <iostream>

using namespace std;
void sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

void findtriplet(int arr[],int n)
{
  sort(arr,n);
  for(int i=n-1;i>0;i++)
  {
    int j=0;
    int k=i-1;
    while(j<k)
    {
        if((arr[i])==(arr[j]+arr[k]))
        {
            cout << "numbers are " << arr[i] << " "
                     << arr[j] << " " << arr[k] << endl;
            return;
        }
        else if(arr[i]<arr[j]+arr[k])
        {
            k--;
        }
        else if(arr[i]>arr[j]+arr[k])
        {
            j++;
        }

    }
  }
    cout<<"no such triplets exists";
}
int main()
{
int arr[]={5, 32, 1, 7, 10, 50, 21, 2};
int n=sizeof(arr)/sizeof(arr[0]);
findtriplet(arr,n);
return 0;
}

