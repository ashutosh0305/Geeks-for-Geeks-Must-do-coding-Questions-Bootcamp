#include <iostream>
#include <set>
#include <unordered_map>

using namespace std;
bool canpairs(int arr[],int n,int k)
{
    if(n%2)
        return false;
    unordered_map<int,int>freq;
    for(int i=0;i<n;i++)
        freq[arr[i]%k]++;
    for(int i=0;i<n;i++)
    {
        int rem=arr[i]%k;
        if(2*rem==k)
        {
            if(freq[rem]%2!=0)
                return false;
        }
        else if (rem==0)
        {
            if(freq[rem]%2)
            return false;


        }
        else if(freq[rem]!=freq[k-rem])
                return false;
    }
    return true;
}

int main()
{
  int arr[]={9,7,5,3};
  int k=6;
  int n=sizeof(arr)/sizeof(arr[0]);
  if(canpairs(arr,n,k))
  {
      cout<<"true";

  }
  else
    cout<<"false";
  return 0;

}
