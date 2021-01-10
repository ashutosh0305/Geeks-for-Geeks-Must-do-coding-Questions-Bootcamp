#include <iostream>
#include <list>

using namespace std;
class Graph
{
    int V;
    list<int> * adj;
    bool iscyclicutil(int v,bool visisted[],int parent);
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
bool Graph::iscyclicutil(int v,bool visited[],int parent)
{
    visited[v]=true;
    list<int>::iterator i;
    for(i=adj[v].begin();i!=adj[v].end();i++)
    {
        if(!visited[*i])
        {
            if(iscyclicutil(*i,visited,v))
                return true;

        }
        else if(*i!=parent)
        {
            return true;

        }

    }
    return false;

}
bool Graph::iscyclic()
{
    bool* visited=new bool[V];
    for(int i=0;i<V;i++)
    {
        visited[i]=false;

    }
    for(int u=0;u<V;u++)
    {
        if(!visited[u])
        {
            if(iscyclicutil(u,visited,-1))
               return true;

        }
    }
    return false;
}
int main()
{
    Graph g1(5);
    g1.addedge(1,0);
    g1.addedge(2,1);
    g1.addedge(2,1);
    g1.addedge(0,3);
    g1.addedge(3,4);
    if(g1.iscyclic())
    {
        cout<<"garph contains cycle\n";

    }
    else
    {
        cout<<"graph doesn't contain cycle\n";

    }
    Graph g2(3);
    g2.addedge(0,1);
    g2.addedge(1,2);
    if(g2.iscyclic())
    {
        cout<<"graph contains cyclic \n";
    }
    else
    {
        cout<<"graph doesn't conatin cycle\n";

    }Detect Cycle in a Directed Graph
    return 0;


}
