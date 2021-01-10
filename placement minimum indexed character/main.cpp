#include <iostream>
#include <unordered_map>
using namespace std;
void printminindex(string str,string patt)
{
    int miniindex=INT_MAX;
    unordered_map<char,int>um;
    int s1=str.size();
    int s2=patt.size();
    for(int i=0;i<s1;i++)
    {
        if(um.find(str[i])==um.end())
            um[str[i]]=i;
    }
    for(int i=0;i<s2;i++)
    {
        if(um.find(patt[i])!=um.end())
        {
            if(um[patt[i]]<miniindex)
                miniindex=um[patt[i]];
        }
    }
    if(miniindex!=INT_MAX)
    {
            cout<<"minimum index character =="<<str[miniindex];

    }
    else
        cout<<"no character present";



}

int main()
{
    string str="geeksforgeeks ";
    string patt="set";
    printminindex(str,patt);
    return 0;
}
