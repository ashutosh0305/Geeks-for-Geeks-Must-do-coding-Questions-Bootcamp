#include <iostream>
#include <list.>
#include <vector>
#include <set>

using namespace std;
# define INF 0x3f3f3f3f
class Graph
{
    int V;
    list<pair<int,int>>*adj;
public:
    Graph(int V);
    void addedge(int u,int v,int w);
    void shortestpath(int s);

};
Graph::Graph(int V)
{
    this->V=V;
    adj=new list<pair<int ,int >>[V];

}
void Graph::addedge(int u,int v,int w)
{
    adj[u].push_back(make_pair(v,w));
    adj[v].push_back(make_pair(u,w));

}
void Graph::shortestpath(int src)
{
    set<pair<int,int>>setds;
    vector<int>dist(V,INF);
    setds.insert(make_pair(0,src));
    //src is the source vertex
    dist[src]=0;
    while(!setds.empty())
    {
        pair<int,int>tmp=*(setds.begin());
        setds.erase(setds.begin());
        int u=tmp.second;
        list<pair<int ,int>>::iterator i;
        for(i=adj[u].begin();i!=adj[u].end();i++)
        {
            int v=(*i).first;
            int w=(*i).second;
            if(dist[v]>(dist[u]+w))
            {
                if(dist[v]!=INF)
                    setds.erase(setds.find(make_pair(dist[v],v)));

            dist[v]=dist[u]+w;
            setds.insert(make_pair(dist[v],v));
            }
        }
    }
    cout<<"vertex distance from source\n";
    for(int i=0;i<V;i++)
        cout<<i<<" "<<dist[i]<<endl    ;
}

int main()
{
    int V=9;
    //no of vertices of the graph
    Graph g(V);
    g.addedge(0,1,4);
    g.addedge(0,7,8);
    g.addedge(1,2,8);
    g.addedge(1,7,11);
    g.addedge(2,3,7);
    g.addedge(2,8,2);
    g.addedge(2,5,4);
    g.addedge(3,4,9);
    g.addedge(3,5,14);
    g.addedge(4,5,10);
    g.addedge(5,6,2);
    g.addedge(6,7,1);
    g.addedge(6,8,6);
    g.addedge(7,8,7);
    g.shortestpath(0);
    return 0;

}
