#include <iostream>
#include <unordered_map>

using namespace std;
int findfirstelement(int arr[],int n,int k)
{
    unordered_map<int,int> count_map;
    for(int i=0;i<n;i++)
    {
        count_map[arr[i]]++;

    }
    for(int i=0;i<n;i++)
        if(count_map[arr[i]]==k)
        return arr[i];
    return -1;


}
int main()
{
    int arr[]={1 ,7 ,4 ,3 ,4 ,8 ,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=2;
    cout<<findfirstelement(arr,n,k);
    return 0;

}
