#include <iostream>

using namespace std;
 char *removealldublicates(char str[],int n)
{
  int j=0;
  int next=0;
  char str1[n]="char str1[n]="\0";\0";
  for(int i=0;i<n;i++)
  {
      for(j=0;j<i;i++)
      {
          if(str[i]==str[j])
          {
              break;
          }

      }
      if(i==j)
      {
          str1[next++]=str[i];
      }
  }
  return str1;

}

int main()
{
    char str[]="geeksforgeeks";
    int n=sizeof(str)/sizeof(str[0]);
    cout<<removealldublicates(str,n);
return 0;

}
