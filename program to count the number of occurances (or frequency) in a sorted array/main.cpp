#include <iostream>

using namespace std;

int countoccurances(int arr[],int n,int x)
{
    int count =0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            count++;
        }
    }
    return count;

}

int main()
{
    int arr[]={1,2,2,2,2,3,4,7,8,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x;
    cout<<" enter number which have to be counted";
    cin>>x;
    cout<<"the no. of occurances are"<<countoccurances(arr,n,x);
    return 0;
}
