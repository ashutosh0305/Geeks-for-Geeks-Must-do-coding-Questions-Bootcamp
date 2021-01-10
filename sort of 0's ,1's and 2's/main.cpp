#include <iostream>

using namespace std;

void sort012(int a[],int n)
{
    int low=0;
    int hi=n-1;
    int mid=0;
    while(mid<=hi)
    {
        switch(a[mid])
        {
        case 0:
            swap(a[low++],a[mid++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(a[mid],a[hi--]);
            break;
        }
    }
}
void printarray(int a[],int n)
{
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

}



int main()
{
    int a[]={0,1,1,0,1,2,1,2,0,0,0,1};
    int n=sizeof(a)/sizeof(a[0]);
    sort012(a,n);
    cout<<"array after segregation";
    printarray(a,n);
    return 0;


}
