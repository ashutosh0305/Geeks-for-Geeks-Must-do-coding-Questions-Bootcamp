#include <iostream>

using namespace std;
int pow(int x, int power)
{
    int result;
    int i;
    result =1;
    for (i=1;i<=power;i++)
    {
        result = result*x;
    }
    return(result);
}

int findpairs(int x[],int y[],int n1,int n2)
{
    int count=0;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            int k=pow(x[i],y[j]);
            int l=pow(y[j],x[i]);
            if(k>l)
            {
                count++;
                cout<<x[i]<<"exponential "<<y[j]<<"is greater "<<endl;

            }



        }
    }
    cout<<"no. of pairs"<<count;
    return 0;
}
int main()
{
 int x[]={10,19,18};
 int y[]={11,15,9};
 int n1=sizeof(x)/sizeof(x[0]);
 int n2=sizeof(y)/sizeof(x[0]);
 findpairs(x,y,n1,n2);
 return 0;

}

