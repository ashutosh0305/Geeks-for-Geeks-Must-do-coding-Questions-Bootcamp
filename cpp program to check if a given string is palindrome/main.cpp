#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

void ispalindrome(char *str)
{
    int l=0;
    int h=strlen(str)-1;
    while(h>l)
    {
        if(str[l++]!=str[h--])
        {
            cout<<"it is not palindrome"<<str;
            cout<<"\t";
            return ;

        }
    }
    cout<<" it is a palindrome"<<str;
    cout<<"\t";

}
int main()
{
    char str1[10]="abba";
    char str2[10]="abbcbba";
    char str3[10]="geeks";
    ispalindrome(str1);
    ispalindrome(str2);
    ispalindrome(str3);
    return 0;

}
