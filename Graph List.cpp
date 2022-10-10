#include<iostream>
#include<list>
#include<iterator>
#include <bits/stdc++.h>

using namespace std;

class Graph{
   public:
   int node;
   list<int> *l;

   Graph(int node){
       this->node = node;
       l = new list<int> [node];

   }
   void addEdge(int source, int dest){
    l[source].push_back(dest); // 1-> 2

        /// undirected graph
        if (source != dest)
            l[dest].push_back(source);
   }
   void display (){
       list<int>::iterator it;

       for(int i = 0; i<node; i++){

           cout<<"vertex "<<i<<" -> ";

           for(it = l[i].begin(); it!= l[i].end(); it++){

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
    cin>>node,edge;

     Graph g(node);

    int source, dest;

    for(int i = 0; i<edge; i++){
        cin>> source>>dest;
        g.addEdge(source, dest);
    }

    g.display();

}
