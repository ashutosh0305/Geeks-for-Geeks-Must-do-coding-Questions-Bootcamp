#include <iostream>

using namespace std;
#define no_of_chars 256

char getsecondmostfreq(string str)
{
    int count[no_of_chars],i;
    for(i=0;str[i]!='\0';i++)
    {
     count[i]=0;
     for(int j=0;str[i]!='\0';j++)
     {
         if(str[i]==str[j])
         {
             count[i]++;
         }

     }
    }
    int first=0,second=0;
    for(i=0;i<no_of_chars;i++)
    {
        if(count[i]>count[first])
        {
            second=first;
            first=i;
        }
        else if (count[i]>count[second] && count[i]!=count[first])
        {
            second=i;
        }
    }
    return str[second];
}
int main()
{
    string str="geeksforgeeks";
    char res=getsecondmostfreq(str);
    if(res!='\0')
        cout<<"secoond most frequent char is "<<"res";
    else
        cout<<"no most frequent character";
return 0;

}
