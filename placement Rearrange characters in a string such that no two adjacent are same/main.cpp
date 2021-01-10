#include <iostream>
#include <queue>

using namespace std;
const int MAX_CHAR=26;

void rearrangestring(string str)
{
    int n=str.length();
    int count[MAX_CHAR]={0};
    for(int i=0;i<n;i++)
        count[str[i]-'a']++;
    priority_queue<pair<int,char>>pq;
    for(char c='a';c<='z';c++)
        if(count[c-'a'])
    {
        pq.push(make_pair(count[c-'a'],c));
    }
    str="";
    pair<int ,char>prev{-1,'#'};
    while(!pq.empty())
    {
        pair<int,char> k=pq.top();
        pq.pop();
        str=str+k.second;

    if(prev.first>0)
        pq.push(prev);
    (k.first)--;
    prev=k;

   }
int z=str.length();
if(n!=z)
    cout<<"not valid string"<<endl;

else
    cout<<str<<endl;
}

int main()
{
    string str="bbbaa";
    rearrangestring(str);
    return 0;
}
