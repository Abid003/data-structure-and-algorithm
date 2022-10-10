#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("List1.txt","r",stdin);

    int node, edge;
    cin >> node >> edge;

    int adj[node+1][node+1];
    memset(adj,0,sizeof(adj));

    int a,b;

    for(int i=0; i<edge; i++)
    {
        cin >> a >> b;//a =3 b = 5
        adj[a][b] = 1; /// adj[1][2] = 1
        adj[b][a] = 1; /// adj[2][1] = 1
    }



    for(int i=1;i<=node;i++) {
        for(int j=1;j<=node;j++) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}