#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
    int node;
    list<int> *adj;
    bool *visited;
    int *level;
    int *parent;

    Graph(int node)
    {
        this->node = node;
        adj = new list<int>[node + 1];
        visited = new bool[node + 1];
        level = new int[node+1];
        parent = new int[node+1];
    }

    void addEdge(int source, int destination)
    {
        adj[source].push_back(destination);
        if (source != destination)
            adj[destination].push_back(source);
    }

    void BFS(int source)
    {
        for(int i=0; i<node; i++)
            visited[i]=0;

        queue<int> Q;
        Q.push(source);
        visited[source] = 1;
        level[source] = 0;
        parent[source] = source;


        list<int>::iterator x;

        while (!Q.empty())
        {

            int current_node = Q.front();
            cout << current_node << " ";
            Q.pop();

            for (x = adj[current_node].begin(); x != adj[current_node].end(); x++)
            {
                if (visited[*x] == 0)
                {
                    Q.push(*x);
                    visited[*x] = 1;
                    level[*x] = level[current_node]+1;
                    parent[*x] = current_node;
                }
            }
        }
    }

    void DFS(int source)
    {
        cout << source << " ";
        visited[source]=1;

        list<int>::iterator x;

        for(x=adj[source].begin(); x!=adj[source].end(); x++)
        {
            if(visited[*x]==0)
            {
                DFS(*x);
            }
        }
    }

};

int main()
{
    freopen("List1.txt", "r", stdin);
    int node, edge;
    cin >> node >> edge;
    int source, destination;

    Graph graph(node);

    for (int i = 0; i < edge; i++)
    {
        cin >> source >> destination;
        graph.addEdge(source, destination);


    }

    cin >> source;
    cout<<"dfs"<<endl;
    graph.DFS(source);

    cout<<endl<<"bfs"<<endl;
    graph.BFS(source);


    return 0;
}

