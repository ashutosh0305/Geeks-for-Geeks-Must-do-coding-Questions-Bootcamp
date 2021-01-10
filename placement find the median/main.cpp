#include <iostream>
#include <queue>

using namespace std;
int avg(int a,int b)
{
    return (a+b)/2;

}
int get_median(int e,int &m,priority_queue<int,vector<int>>&l,priority_queue<int,vector<int>,greater<int> >&r)
{
  int sig;
  if(l.size()==r.size())
  {
      sig=0;
  }
  if(l.size()<r.size())
  {
      sig=-1;
  }
  if(l.size()>r.size())
  {
      sig=1;
  }
  switch(sig)
  {
  case 1:
      {
    if(e<m)
    {
        r.push(l.top());
        l.pop();
        l.push(e);
    }
    else
        r.push(e);
    m=avg(l.top(),r.top());
    break;
      }
  case 0:
      {
      if(e<m)
      {
          l.push(e);
          m=l.top();
      }
      else
      {
          r.push(e);
          m=r.top();
      }
      break;
      }
  case -1:
      {
          if(e<m)
      {
        l.push(e);

      }
          else
      {
        l.push(r.top());
        r.pop();
        r.push(e);

      }
     m=avg(l.top(),r.top());
      break;
      }
  }
      return m;
}
void printmedian(int A[],int size)
{
    int m=0;
    priority_queue<int,vector<int>>left;
    priority_queue<int,vector<int>,greater<int>>right;
    for(int i=0;i<size;i++)
    {
        m=get_median(A[i],m,left,right);
        cout<<m<<endl;
    }
}

int main()
{
    int  A[]={5,15,1,3,2,8,7,9,10,6,11,4};
    int  size=sizeof(A)/sizeof(A[0]);
    printmedian(A,size);
    return 0;

}
