#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("rc.txt","r",stdin);
    int n;
    cin >> n;

    int val[n+1];//ignore 0 index

    for(int i=1;i<=n;i++) {
            cin >> val[i];// input n numbers
    }

    int table[n+1][n+1];
    memset(table,0,sizeof(table));

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if(i<=j)
                table[i][j] = max(val[i]+table[i][j-i],table[i-1][j]); ///table [i][j] er man = val[i]+table[i][j-i] and table[i-1][j] er moddhe jeta boro seta
            else
                table[i][j] = table[i-1][j];
        }
    }

       for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
                cout<<table[i][j]<<" ";
        }
        cout<<endl;
    }
}
