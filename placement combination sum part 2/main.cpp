#include <iostream>
#include <unordered_set>

using namespace std;

void printpairs(int A[],int arr_size,int sum)
{
    unordered_set<int>s;
    int flag=0;
    for(int i=0;i<arr_size;i++)
    {
        int temp=sum-A[i];
        if(s.find(temp)!=s.end())

            {
                cout<<"pair with given sum"<<sum<<"is ("<<A[i]<<","<<temp<<")"<<endl;
                flag=1;
            }
        s.insert(A[i]);


    }
    if(flag==0)
        cout<<"there is no any valid pairs exists";

}
int main()
{
   int A[]={0,-1,2,-3,1};
   int n=-2;
   int arr_size=sizeof(A)/sizeof(A[0]);
   printpairs(A,arr_size,n);
   return 0;
}
