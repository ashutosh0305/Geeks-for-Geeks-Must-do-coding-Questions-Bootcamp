#include <iostream>
#include <set>
using namespace std;
void maxchainlength(pair<int,int>arr[],int n)
{
    set<pair<int,int>> setds;
    for(int i=0;i<n;i++)
    {
        setds.insert(make_pair(arr[i].first,arr[i].second));
    }
    pair<int,int>temp=*(setds.begin());
    setds.erase(setds.begin());
    cout<<"{"<<temp.first<<","<<temp.second<<"}";
    while(!setds.empty())
    {
        pair<int,int> sectemp=*(setds.begin());
        if(sectemp.first>temp.second)
        {
            cout<<" "<<"{"<<sectemp.first<<","<<sectemp.second<<"}";
            temp=sectemp;
            setds.erase(setds.begin());
        }
        else
        {
            setds.erase(setds.begin());
        }

    }

}

int main()
{
   pair<int,int>arr[]={{5,24},{15,25},{27,40},{50,60}};
   int n=sizeof(arr)/sizeof(arr[0]);
   cout<<"length of maximum size chain is" ;
   maxchainlength(arr,n);
   return 0;
}
