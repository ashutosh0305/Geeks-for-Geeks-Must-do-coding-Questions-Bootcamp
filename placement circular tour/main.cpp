#include <iostream>

using namespace std;
class petrolpump
{
    public:
    int petrol;
    int distance;
};

int gettour(petrolpump arr[],int n)
{
    int start=0;
    int sum=0;
    int diff=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i].petrol-arr[i].distance;
        if(sum<0)
        {
            start=i+1;
            diff=diff+sum;
            sum=0;
        }
    }
    if(sum+diff>=0)
        return start;
    else
        return -1;
}
int main()
{
    petrolpump arr[]={{4,6},{6,5},{7,3},{4,5}};
    int n=sizeof(arr)/sizeof(arr[0]);
    int value=gettour(arr,n);
    cout<<value;
    return 0;

}
