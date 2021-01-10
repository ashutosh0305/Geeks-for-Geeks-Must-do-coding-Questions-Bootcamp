#include <iostream>
#include <stack>

using namespace std;

bool isparenthesisbalanced(string expr)
{
    stack <char> s;
    char x;
    for(int i=0;i<expr.length();i++)
    {
        if(expr[i]=='{'||expr[i]=='['||expr[i]=='(')
            {
              s.push(expr[i]);
              continue;
            }
         if(s.empty())
         {
             return false;

         }
         switch(expr[i])
         {
         case')':
            x=s.top();
            if(x=='{'||x=='[')
                return false;
            s.pop();
            break;
         case']':
            x=s.top();
            if(x=='('||x=='{')
                return false;
            s.pop();
            break;
         case'}':
            x=s.top();
            if(x=='('||x=='[')
            {
                return false;
            }
            s.pop();
            break;
         }
    }
    return (s.empty());

}
int main()
{
  string expr="(()";
  if(isparenthesisbalanced(expr))
  {
      cout<<"balanced";
  }
  else
    {
        cout<<"not balanced";
    }
  return 0;

}
