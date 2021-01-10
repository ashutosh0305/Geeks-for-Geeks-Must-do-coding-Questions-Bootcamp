#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int mindist(int arr[],int n,int x,int y)
{
    int i,j;
    int mindist=INT_MAX;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==x and arr[j]==y)
                mindist=min(mindist,abs(i-j));
            if(arr[j]==x and arr[i]==y)
            {
                mindist=min(mindist,abs(j-i));
            }

        }
    }
    return mindist;

}
int main()
{
    int arr[]={3,5,4,2,6,5,6,6,5,4,8,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=3;
    int y=6;
    cout<<"minimum  distance betweeen "<<x<<"and "<<y <<"is"<<mindist(arr,n,x,y)<<endl;
    return 0;
}
