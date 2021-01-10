#include <iostream>


using namespace std;
void set(int [],int ,int);
void multiplythem(int *temp,int n)
{
    int multiplication=1;
    for(int j=0;j<n;j++)
    {
        multiplication=temp[j]*multiplication;
    }
    cout<<multiplication;

}



void set(int arr[],int d,int n)
{
    int* temp=int new(sizeof(int)*n);
    temp[d]=1;
    for(int i=0;i<d;i++)
    {
        temp[i]=arr[i];

    }
    for(int i=d+1;i<n;i++)
    {
        temp[i]=arr[i];

    }
    multiplythem(temp,n);


}

void productarray(int arr[],int n)
{
    if(n==1)
    {
        cout<<0;
        return ;

    }
    else
    {
    for(int i=0;i<n;i++)
    {
        set(arr,i,n);
    }
    }


}


int main()
{
    int arr[]={10,3,5,6,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"the product array puzzle";
    productarray(arr,n);

}
