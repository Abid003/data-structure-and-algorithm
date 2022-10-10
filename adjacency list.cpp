#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
    int node;
    list<int> *l;


    Graph(int node)
    {
        this->node = node;
      l = new list<int>[node+1];

    }

    void addEdge(int source, int dest){
          l[source].push_back(dest);

        /// undirected graph
        if (source != dest)
            l[dest].push_back(source);
    }

    void display(){
        list<int>::iterator it;

        for(int i = 1 ; i<=node; i++){
                cout<<i<<" -> ";
            for( it = l[i].begin(); it!= l[i].end(); it++){
                cout<<*it<< " ";
            }
        cout<<endl;
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

    for(int i = 0; i<edge; i++){
        cin>>source>>dest;
        g.addEdge(source,dest);
    }
    g.display();


    return 0;
}
