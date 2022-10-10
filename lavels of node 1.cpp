#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
    int node;
    list<int> *l;
    bool *visited;
    int *level;
    int *parent;


    Graph(int node)
    {
        this->node = node;
        l = new list<int>[node+1];
        visited = new bool[node + 1];
        level = new int[node+1];
        parent = new int[node+1];
    }

    void addEdge(int source, int dest)
    {
        l[source].push_back(dest);

        /// undirected graph
        if (source != dest)
            l[dest].push_back(source);
    }

    void display()
    {
        list<int>::iterator it;

        for(int i = 1 ; i<=node; i++)
        {
            cout<<i<<" -> ";
            for( it = l[i].begin(); it!= l[i].end(); it++)
            {
                cout<<*it<< " ";
            }
            cout<<endl;
        }
    }

    void Bfs(int source){
         for(int i=0;i<node;i++) visited[i]=0;

        queue<int> q;
        q.push(source);
        visited[source] = 1;
        level[source] = 0;
        parent[source] = source;

          list<int>::iterator x;

        while (!Q.empty()) {

        }
    }

};



int main()
{
    freopen("List1.txt","r",stdin);
    int node,edge;
    int source, dest;
    cin >> node>>edge;
    Graph g(node);

    for(int i = 0; i<edge; i++)
    {
        cin>>source>>dest;
        g.addEdge(source,dest);
    }
    g.display();


    return 0;
}
