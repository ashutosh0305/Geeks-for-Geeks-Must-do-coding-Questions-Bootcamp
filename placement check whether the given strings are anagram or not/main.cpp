
#include <bits/stdc++.h>


using namespace std;
#define NO_OF_CHARS 256

int areanagram(string str1,string str2)
{
    int count1[NO_OF_CHARS]={0};
    int count2[NO_OF_CHARS]={0};
    if(str1.length()!=str2.length())
    {
        return 0;
    }
    for(int i=0;str1[i]&&str2[i];i++)
    {
        count1[str1[i]]++;
        count2[str2[i]]++;


    }
    for(int i=0;i<NO_OF_CHARS;i++)
    {
        if(count1[i]!=count2[i])
        {

            return 0;

        }
    }
    return 1;
}

int main()
{
    string str1="GEEKEKS";
    string str2="GEEKEKS";
    if(areanagram(str1,str2))
    {
        cout<<"the two strings are anagram of each other";

    }
    else
        {
            cout<<"the strings are not anagrams of each other";

        }
}
