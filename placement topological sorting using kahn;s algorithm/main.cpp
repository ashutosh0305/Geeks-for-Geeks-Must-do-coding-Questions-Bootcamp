#include <iostream>
#include <vector>
#include <list>
#include <queue>

using namespace std;
class Graph
{
    int V;
    list<int> * adj;
public:
    Graph(int V);
    void addedge(int u,int w);
    void topologicalsort();

};

Graph::Graph(int V)
{

    this->V=V;
    adj=new list<int>[V];
}
void Graph::addedge(int u,int v)
{
    adj[u].push_back(v);
}
void Graph::topologicalsort()
{
    vector<int>in_degree(V,0);
    for(int u=0;u<V;u++)
    {
        list<int>::iterator itr;
        for(itr=adj[u].begin();itr!=adj[u].end();itr++)
        {
            in_degree[*itr]++;
        }
    }
        queue<int> q;
        for(int i=0;i<V;i++)
        {
            if(in_degree[i]==0)
                q.push(i);

        }
        int cnt=0;
        vector<int> top_order;
        while(!q.empty())
        {
            int u=q.front();
            q.pop();
            top_order.push_back(u);
            list<int>::iterator itr;
            for(itr=adj[u].begin();itr!=adj[u].end();itr++)
            {
                if(--in_degree[*itr]==0)
                    q.push(*itr);

            }
            cnt++;

        }
        if(cnt!=V)
        {
           cout<<"there exists a cycle in graph\n";
           return ;
        }
        for(size_t i=0,max=top_order.size();i!=max;i++)
            cout<<top_order[i]<<" ";
         cout<<endl;

}

int main()
{
   Graph g(6);
   g.addedge(5,2);
   g.addedge(5,0);
   g.addedge(4,0);
   g.addedge(4,1);
   g.addedge(2,3);
   g.addedge(3,1);
   cout<<"following is a topological sort of \n";
   g.topologicalsort();
   return 0;

}
