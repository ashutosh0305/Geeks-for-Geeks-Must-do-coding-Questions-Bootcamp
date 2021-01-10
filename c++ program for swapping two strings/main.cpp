#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

using namespace std;

 void swap(char *str1,char *str2)
 {
     char *temp=(char *)calloc(sizeof(char),(strlen(str1)+1);
     strcpy(temp,str1);
     strcpy(str1,str2);
     strcpy(str2,temp);
     free(temp);

 }
int main()
{
    char str1[10]="geeks";
    char str2[10]="forgeeks";
    swap(str1,str2);
    cout<<"str1 is"<<str1<<"\t"<<"str2"<<str2;
    getchar();
    return 0;


}
