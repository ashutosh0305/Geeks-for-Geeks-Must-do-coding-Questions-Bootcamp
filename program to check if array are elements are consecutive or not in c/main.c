#include <stdio.h>
#include <stdlib.h>

int getmin(int [],int );
int getmax(int [],int);

bool areconsecuitve(int arr[],int n)
{
    if(n<1)
    {
        return false;

    }
    int min=getmin(arr,n);
    int max=getmax(arr,n);
    if(max-min+1==n)
    {
        bool*visited=(bool*)calloc(n,sizeof(bool));
        for(int i=0;i<n;i++)
        {
            if(visited(arr[i]-min)!=false)
            {
                return false;
            }
            visited(arr[i]-min)=true;
        }
        return true;

    }
    return false;
}


}
int getmin(int arr[],int n)
{
    int min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
          min=arr[i];

        }
    }
    return min;
}
int getmax(int arr[],int n)
{
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[0];
        }
    }
}



int main()
{
int arr[]={5,4,2,3,1,6};
int n=sizeof(arr)/sizeof(arr[0]);
if(areconsecutive(arr,n)==n)
{
    printf("array elemnts are consecutive ");

}
else
{
    printf("array elements are not consecutive");

}
return 0;
}
