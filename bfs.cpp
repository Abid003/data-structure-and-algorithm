#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
    int node; // number of nodes
    list<int> *adj;
    bool *visited;
    int *level;
    int *parent;

    Graph(int node)
    {
        this->node = node;
        adj = new list<int>[node + 1]; // 0-based indexing
        visited = new bool[node + 1];  // 0-based indexing
        level = new int[node+1];
        parent = new int[node+1];
    }

    void addEdge(int source, int destination)
    {
        adj[source].push_back(destination); // 1-> 1

    }
    void DFS(int source) {
        cout << source << " ";
        visited[source]=1;

        list<int>::iterator x;

        for(x=adj[source].begin();x!=adj[source].end();x++) {
            if(visited[*x]==0) {
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

    graph.DFS(source);

    return 0;
}
