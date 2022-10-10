#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("matrix.txt","r",stdin);

    int node, edge;
    cin >> node >> edge;

    map<int,list<int> > adj;
    map<int,list<int> >:: iterator it;

    list<int>:: iterator i;

    int a,b;

    for(int i=0;i<edge;i++) {
            cin >> a >> b;  /// 1 2
            adj[a].push_back(b); /// 3 -> 5  /// 1 -> 1, 2

            if(a!=b)
            adj[b].push_back(a); /// 5 -> 3  /// 2 -> 1
    }

    for(it=adj.begin();it!=adj.end();it++) {

        int current_node = it->first;

        cout << current_node << " - > ";


        for(i=adj[current_node].begin();i!=adj[current_node].end();i++) {
            cout << *i << " ";
        }
        cout << endl;
    }




    return 0;
}
