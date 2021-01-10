#include <iostream>
#include <algorithm>
using namespace std;
class activity
{
public:
    int start;
    int finish;

};
bool compare(activity s1,activity s2)
{
    return s1.finish<s2.finish;
}
void printmaxactivities(activity arr[],int n)
{
    sort(arr,arr+n,compare);
    cout<<"following activities are selected \n";

    int i=0;
    cout<<"("<< arr[i].start<<","<<arr[i].finish<<"),";
    for(int j=1;j<n;j++)
    {
        if(arr[j].start>=arr[i].finish)
        {
            cout<<"("<<arr[j].start<<" ,"<<arr[j].finish<<"),";
            i=j;

        }

    }
}
int main()
{
    activity arr[]={{5,9},{1,2},{3,4},{0,6},{5,7},{8,9}};
    int n=sizeof(arr)/sizeof(arr[0]);
    printmaxactivities(arr,n);
    return 0;

}
