#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
class graph{
    public:
    unordered_map<int,list<int>>adj;
    void addEdge(int u, int v, bool direction)
    {
        //direction -> 0 :: undirected
        //direction -> 1 :: directed
        adj[u].push_back(v);
        if(direction == 0)
        {
            adj[v].push_back(u);
        }
    }

    void print()
    {
        for(auto it : adj)
        {
            cout<<it.first<<" -> ";
            for(auto it2 : it.second)
            {
                cout<<it2<<", ";
            }
            cout<<endl;
        }
        
    }
};

int main()
{
    int n;
    cout<<"Enter the number of nodes"<<endl;
    cin>>n;
    int m;
    cout<<"Enter the number of edges"<<endl;
    cin>>m;

    graph g;
    for(int i = 0; i < m; i++)
    {
        int u;
        int v;
        cin>> u >> v;
        g.addEdge(u, v, 0);
    }
    g.print();
}