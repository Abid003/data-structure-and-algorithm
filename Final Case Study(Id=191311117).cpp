#include <bits/stdc++.h>
using namespace std;
#define WHITE 0
#define GRAY 1
#define BLACK 2
string garments[] = {" ", "CL","DM","DS","ALGO","PY","OP","ML","CHY"};

struct Vertex
{
    int v;
    int d;
    int color;
    Vertex *parent;
    Vertex() {}
    Vertex(int v)
    {
        this->v = v;
    }
};

struct Edge
{
    Vertex u, v;
    Edge() {}
    Edge(Vertex u, Vertex v)
    {
        this->u = u;
        this->v = v;
    }
};

class Graph
{
    public:

    Vertex* vertices;
    Edge* edges;
    int nv, ne, j, time;
    vector<Vertex>* adj_list;
    stack<Vertex> sorted_list;
    map<int, int> *m;

    Graph(int nv, int ne)
    {
        this->nv = nv;
        this->ne = ne;
        vertices = new Vertex[nv];
        edges = new Edge[ne];
        adj_list = new vector<Vertex>[nv];
        m = new map<int, int>[nv];
        for(int i = 0; i < nv; i++)
            vertices[i] = Vertex(i);
    }

       void add_edge(int ui, int vi, int w)
    {
        Vertex u = Vertex(ui);
        Vertex v = Vertex(vi);
        adj_list[ui].push_back(v);
        m[ui][vi] = w;
    }

    void visited(int u)
    {
        vertices[u].color = GRAY;

        for(int i = 0; i < adj_list[u].size(); i++)
        {
            int j = adj_list[u][i].v;
            if(vertices[j].color == WHITE)
               visited(j);
        }
        vertices[u].color = BLACK;
        sorted_list.push(vertices[u]);
    }

    void dfs()
    {
        for(int i = 0; i < nv; i++)
            vertices[i].color = WHITE;
        for(int i = 0; i < nv; i++)
            if(vertices[i].color == WHITE)
                visited(vertices[i].v);
    }

    stack<Vertex> get_topo_sort()
    {
        dfs();
        return sorted_list;
    }

};

int main()
{
    freopen("Input1.txt","r",stdin);
    int nv, ne;
    cin>>nv>>ne;
    Graph graph = Graph(nv, ne);

    for(int i = 1; i <= ne; i++)
    {
        int u, v, w;
       cin>>u>>v>>w;
        graph.add_edge(u, v, w);
    }

    int i=0;
    int s, v;
    cin>>s>>v;
    stack<Vertex> sorted_list = graph.get_topo_sort();
    while(i!=s)
    {
        i = sorted_list.top().v;
        sorted_list.pop();
        cout << garments[i] << " ";
    }
    cout  << endl;

    return 0;
}
