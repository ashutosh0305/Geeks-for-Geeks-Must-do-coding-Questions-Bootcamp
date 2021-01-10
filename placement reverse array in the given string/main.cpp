#include <iostream>

using namespace std;
void reverse(string str,int n)
{
    for(int i=n;n>=0;i--)
    {
        cout<<str[i];
    }

}

int main()
{
    string str="i love you so much";
    int n=str.length();
    cout<<"the original string is "<<str<<endl;
    cout<<"reverse string is \n";
    reverse(str,n);
    return 0;
}
