#include <bits/stdc++.h>
using namespace std;

void lcs(string a, string b){

    int col = a.size();
    int row=  b.size();

  //cout<<col<< row;

    int table[row+1][col+1];
    memset(table, 0, sizeof(table));


    int i = 0;
    int count= 0;

 while(table[row][col]!=0)
    {
        if(table[row][col] == table[row][col-1])
        {
            col--;
        }
        else if(table[row][col] == table[row-1][col])
        {
            row--;
        }
        else if(table[row][col] == table[row-1][col-1]+1)
        {
            col--;
            row--;
            count++;
        }
    }
    cout <<count<<  endl;


}

int main()
{
    int n;
    cin>>n;

    for(int i = 0; i<n; i++){
    string a, b;
    cin>>a>>b;
    lcs(a,b);
    }

}
