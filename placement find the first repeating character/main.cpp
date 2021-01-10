#include <iostream>
#include <unordered_set>
#include <string.h>

using namespace std;

char firstrepeating(string str[],int n)
{
    unordered_set<char>h;
    for(int i=0;i<n;i++)
    {

        char c=str[i];
        if(h.find(c)!=h.end())
            return c;
        else
            h.insert(c);
    }
    return '\0';
}
int main()
{
    string str[]="geeks for geeks";
    int n=str.length();
    cout<<firstrepeating(str,n);
    return 0;
}
