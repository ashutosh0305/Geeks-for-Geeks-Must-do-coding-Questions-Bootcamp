#include <iostream>
#include <list>
#include <stack>
using namespace std;
class Graph
{
    int V;
    list<int>*adj;
    void fillorder(int v,bool visited[],stack<int> &stack);
    void DFSutil(int v,bool visited[]);
public:
    Graph(int v);
    void addedge(int v,int w);
    void printsccs();
    Graph gettranspose();
};
Graph::Graph(int V)
{
    this->V=V;
    adj=new list<int>[V];
}


void Graph::DFSutil(int v,bool visited[])
{
    visited[v]=true;
    cout<<v<<" ";
    list<int>::iterator i;
    for(i=adj[v].begin();i!=adj[v].end();i++)
    {
        if(!visited[*i])
            DFSutil(*i,visited);

    }

}
Graph Graph::gettranspose()
{
    Graph g(V);
    for(int v=0;v<V;v++)
    {
        list<int>::iterator i;
        for(i=adj[v].begin();i!=adj[v].end();i++)
        {
            g.adj[*i].push_back(v);

        }
    }
    return g;
}
void Graph::addedge(int v,int w)
{
    adj[v].push_back(w);
}
void Graph::fillorder(int v,bool visited[],stack<int>&stack)
{
    visited[v]=true;
    list<int>::iterator i;
    for(i=adj[v].begin();i!=adj[v].end();i++)
    {
        if(!visited[*i])
        {
            fillorder(*i,visited,stack);
        }
    }
    stack.push(v);
}
void Graph::printsccs()
{
    stack<int >stack;
    bool visited[V];
    for(int i=0;i<V;i++)
    {
        visited[i]=false;

    }
    for(int i=0;i<V;i++)
    {
        if(!visited[i])
        {
            fillorder(i,visited,stack);
        }
    }
    Graph gr=gettranspose();
    for(int i=0;i<V;i++)
        visited[i]=false;
    while(stack.empty()==false)
    {
        int v=stack.top();
        stack.pop();
        if(visited[v]==false)
        {
            gr.DFSutil(v,visited);
            cout<<endl;

        }
    }
}
int main()
{
      Graph g(5);
      g.addedge(1,0);
      g.addedge(0,2);
      g.addedge(2,1);
      g.addedge(0,3);
      g.addedge(3,4);
      cout<<"following are the strongly connected components in""given graph \n";
      g.printsccs();
      return 0;
}

