#include <iostream>

using namespace std;
void findlargest(int m,int s)
{
    if(s==0)
    {
        if(m==s)
            cout<<"largest number is";
        else
            cout<<"not possible";
        return;

    }
    if(s>9*m)
        {
            cout<<"not possible";
            return;
        }
    int res[m];
        for(int i=0;i<m;i++)
        {
            if(s>=9)
            {
                res[i]=9;
                s-=9;
            }
            else
            {
                res[i]=s;
                s=0;

            }

        }
        cout<<"largest nummber is";
        for(int i=0;i<m;i++)
            cout<<res[i];
}
int main()
{
    int s=9,m=2;
    findlargest(m,s);
    return 0;
}
