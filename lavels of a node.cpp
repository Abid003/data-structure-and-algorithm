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
        adj = new list<int>[node+1];
        visited = new bool[node+1];
        level = new int[node+1];
        parent = new int[node+1];

        for(int i=0; i<node; i++)
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
        BFS(source);
    }

    void printList()
    {
        list<int>::iterator it;
        for(int i = 1 ; i<=node; i++)
        {
                cout<<i<< " ";
            for( it = adj[i].begin(); it!= adj[i].end(); it++)
            {
                    cout<<*it<< " ";
            }
            cout<<endl;
        }
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
};



int main()
{

    freopen("list2.txt","r",stdin);
    int node;
    cin >> node;

    Graph graph(node);
    graph.make_list();
  graph.printList();

    for (int i = 1; i<node+1; i++)
    {
        cout<< graph.level[i] <<"  ";
    }
    return 0;
}
