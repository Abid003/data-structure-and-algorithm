#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("list2.txt","r",stdin);
    int node,edge =0;
    cin >> node;



//input from list
    list<int>l[node+1];
    list<int>::iterator it;
    for(int i=1; i<=node; i++)
    {
        int source,degree;
        cin >> source >> degree;
        int dest;
        for(int j=1; j<=degree; j++)
        {
            cin >> dest;
            l[source].push_back(dest);

        }
        edge = edge + degree;
    }



     int table[node+1][edge+1];
    memset(table,0,sizeof(table));

    /*   for(int i = 1 ; i<node+1; i++)
    {
        for(int j = 1 ; j<edge+1; j++)
        {
                cout<<table[i][j]<<" ";
        }
        cout<<endl;
    }
*/


    for(int i = 1 ; i<=node; i++)
    {
        cout<<i<< " ";
        for( it = l[i].begin(); it!= l[i].end(); it++)
        {
            cout<<*it<< " ";
            table[i][*it] = 1;
        }
        cout<<endl;
    }

    cout<<endl;



    //matrix

    for(int i = 1 ; i<node+1; i++)
    {
        for(int j = 1 ; j<edge+1; j++)
        {
                cout<<table[i][j]<<" ";
        }
        cout<<endl;
    }
}
