#include <iostream>
#include <queue>
#include <list>

using namespace std;
class Graph
{
    int V;
    list<int >*adj;
public:
    Graph(int V);
    void addedge(int v,int w);
    void BFS(int s);

};
Graph::Graph(int V)
{
    this->V=V;
    adj=new list<int>[V];

}
void Graph::addedge(int v,int w)
{
    adj[v].push_back(w);

}
void Graph::BFS(int s)
{
    bool *visited=new bool[V];
    for(int i=0;i<V;i++)
        visited[i]=false;
    queue<int>q;
    q.push(s);
    visited[s]=true;
    while(!q.empty())
    {
        int s=q.front();
        cout<<s<<" ";
        q.pop();
        list<int>::iterator i;
        for(i=adj[s].begin();i!=adj[s].end();i++)
        {
            if(!visited[*i])
            {
                visited[*i]=true;
                q.push(*i);

            }
        }

    }

}



int main()
{
   Graph g(4);
   g.addedge(0,1);
   g.addedge(0,2);
   g.addedge(1,2);
   g.addedge(2,0);
   g.addedge(2,3);
   g.addedge(3,3);
   cout<<"following is breath first traversal"<<"(starting from vertex 2)\n";
   g.BFS(2);
   return 0;
}

