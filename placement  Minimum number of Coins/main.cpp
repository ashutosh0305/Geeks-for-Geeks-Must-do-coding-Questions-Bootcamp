#include <iostream>
#include <algorithm>
using namespace std;
int deno[]={1,2,5,10,20,50,100,500,1000};
int n=sizeof(deno)/sizeof(deno[0]);


void findmin(int V)
{
 sort(deno,deno+n);
 vector<int>ans;
 for(int i=n-1;i>=0;i--)
 {
     while(V>=deno[i])
     {
         V=V-deno[i];
         ans.push_back(deno[i]);

     }
 }
 vector<int>::iterator i;
 for(i=ans.begin();i!=ans.end();i++)
 {
     cout<<*i<<" ";
 }
}
int main()
{
     int n=93;
     cout<<"following is the minimal number of change fr "<<n<<":";
     findmin(n);
     return 0;

}
