#include <iostream>

using namespace std;

void find3numbers(int A[],int n,int sum)
{
    int l,r;
    for(int i=0;i<n-2;i++)
    {
        for(l=i+1;l<n-1;l++)
        {
            for(r=l+1;r<n;r++)
            {
                if(sum==A[i]+A[l]+A[r])
                {
                    cout<<"triplet is"<<A[i]<<" ,"<<A[l]<<","<<A[r];
                    return ;
                }
            }
        }
    }
    cout<<"there is no any triplet for this sum";
}
int main()
{
    int A[]={1,4,45,6,10,8};
    int sum=22;
    int arr_size=sizeof(A)/sizeof(A[0]);
    find3numbers(A,arr_size,sum);
    return 0;

}
