#include <iostream>
#include <unordered_map>
using namespace std;
void findfourelements(int arr[],int n,int x)
{
    unordered_map<int,pair<int,int>>hm;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            hm[arr[i]+arr[j]]={i,j};

        }
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)

        {
            int sum=arr[i]+arr[j];
            if(hm.find(x-sum)!=hm.end())
            {
                pair<int,int>p=hm[x-sum];
                if(p.first!=i&&p.first!=j&&p.second!=i&&p.second!=j)
                {
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[p.first]<<" "<<arr[p.second];
                    return ;

                }
            }
        }
    }

}

int main()
{
    int arr[]={10,20,30,40,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=91;
    findfourelements(arr,n,x);
    return 0;

}
