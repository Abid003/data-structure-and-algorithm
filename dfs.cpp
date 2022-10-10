#include <bits/stdc++.h>
using namespace std;

class Graph {
public:
    int node;
    list<int> *adj;
    bool *visited;

    Graph(int node) {
        this->node = node;
        adj = new list<int>[node+1];
        visited = new bool[node+1];

        for(int i=0;i<node;i++)
            visited[i]=0;
    }

    void make_list()
    {
          int source,degree;
        for(int i=1; i<=node; i++)
        {

            cin >> source >> degree;
            int dest;
            for(int j=1; j<=degree; j++)
            {
                cin >> dest;
                adj[source].push_back(dest);
            }
        }
        cin>>source;
        DFS(source);
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
     freopen("list2.txt","r",stdin);
    int node;
    cin >> node;

    Graph graph(node);
    graph.make_list();
  //graph.printList();

    return 0;
}
