#include <iostream>
#include <list>
using namespace std;
class Graph
{
    int V;
    list<int> * adj;
    bool iscyclicutil(int v,bool visited[],bool *rs);
  public:
    Graph(int V);
    void addedge(int v,int w);
    bool iscyclic();

};
Graph::Graph(int V)
{
    this->V=V;
    adj=new list<int>[V];

}
void Graph::addedge(int v,int w)
{
    adj[v].push_back(w);
    adj[w].push_back(v);

}
bool Graph::iscyclicutil(int v,bool visited[],bool *recstack)
{
    if(visited[v]==false)
    {
        visited[v]=true;
        recstack[v]=true;
        list<int>::iterator i;
        for(i=adj[v].begin();i!=adj[v].end();i++)
        {
            if(!visited[*i]&& iscyclicutil(*i,visited,recstack))
                return true;
            else if(recstack[*i])
                return  true;

        }

    }
    recstack[v]=false;
    return false;

}
bool Graph::iscyclic()
{
 bool*visited=new bool[V];
 bool*recstack=new bool[V];
 for(int i=0;i<V;i++)
 {
     visited[i]=false;
     recstack[i]=false;

 }
 for(int i=0;i<V;i++)
 {
     if(iscyclicutil(i,visited,recstack))
     {
         return true;
     }
 }
     return false;
}
int main()
{
 Graph g1(5);
 g1.addedge(0,1);
 g1.addedge(0,2);
 g1.addedge(1,2);
 g1.addedge(2,0);
 g1.addedge(2,3);
 g1.addedge(3,3);
 if(g1.iscyclic())
 {
     cout<<"graph contains cycle\n";

 }
 else
    {
        cout<<"graph  doesn't contains cycle\n";
    }
}
