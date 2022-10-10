#include <bits/stdc++.h>
using namespace std;
int main(){
  int n =5;
    list<int> l[n];
    list <int>::iterator it;


    freopen("List.txt","r",stdin);
    for(int i = 0; i<5; i++){
        
        l[i].push_back(1);
       
    }
    int i = 0;
    for(it = l[i].begin();it!= l[i].end(),i<5;it++,i++){
      int  n[i] = {*it};
        cout<<n[i]<<" ";
    }
      
}