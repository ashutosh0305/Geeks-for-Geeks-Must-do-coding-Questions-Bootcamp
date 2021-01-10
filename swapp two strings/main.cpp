#include <iostream>

using namespace std;
void swap(char *str1,char *str2)
{
    char *str3=*str1;
    str1=*str2;
    str1=str3;

}
int main()
{
    char str1[]="geeksforgeeks";
    char str2[]="ashutoshbisht";
    swap(&str1,&str2);
    cout<<str1<<" "<<str2;
return 0;
}
