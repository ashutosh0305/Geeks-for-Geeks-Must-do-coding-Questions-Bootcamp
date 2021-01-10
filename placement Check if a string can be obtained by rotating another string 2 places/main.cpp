#include <iostream>

using namespace std;
int isrotated(string str1,string str2)
{
    if(str1.length()!=str2.length())
    {
        cout<<"both are not same strings";
        return 0;
    }
    string leftrotated="";
    string rightrotated="";
    int n=str2.length();
    leftrotated=leftrotated+str2.substr(2)+str2.substr(0,2);
    rightrotated=rightrotated+str2.substr(n-2,2)+str2.substr(0,n-2);
    if(str1.compare(leftrotated)==0 || str1.compare(rightrotated)==0)
    {
        return 1;
    }
    return 0;
}

int main()
{
 string str1="geeks";
 string str2="eksge";
 int x=isrotated(str1,str2);
 if(x)
 {
     cout<<"yes";

 }
 else
 {
     cout<<"no";

 }
 return 0;
}
