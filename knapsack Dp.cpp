#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("dpks.txt","r",stdin); // read a file, dpks.txt

    int bagSize,items;
    cin >> bagSize >> items;

    cout << "Bag Size: " << bagSize << endl;
    cout << "Number of Items: " << items << endl;

    cout << endl << endl;



    int value[items+1],weight[items+1];

    for(int i=1; i<=items; i++)
    {
        cin >> value[i] >> weight[i];
        cout << "Item: " << i << ": Value :" << value[i] << " & Weight :" << weight[i] << endl;
    }

    cout << endl;

    int table[items+1][bagSize+1];

    memset(table,0,sizeof(table)); /// assign 0 to every index;

    for(int i=1; i<=items; i++)
    {
        for(int j=1; j<=bagSize; j++)
        {
            if(weight[i]>j)
            {
                table[i][j] = table[i-1][j]; /// previous profit
            }
            else
            {
                table[i][j] = max(value[i] + table[i-1][j-weight[i]], table[i-1][j] );
            }
        }
    }

    for(int i=0; i<=items; i++)
    {
        for(int j=0; j<=bagSize; j++)
        {

            cout << table[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Maximum Profit     :" << table[items][bagSize] << endl;

    int i,j;

    i = items;
    j = bagSize;

    while(table[i][j] != 0) {
        if(table[i][j] != table[i-1][j])
        {
            cout << "Item " << i << ": value: " << value[i] << " & weight: " << weight[i] << endl;
            j = j - weight[i];
        }
        i--;
    }

    return 0;
}
