#include<iostream>
#include<map>
#include<iterator>

using namespace std;

int main(){
    int  n;
    cin>>n;
    int key, value;


    multimap<int,int>m;
    map<int, int>::iterator it;

    for(int i = 0; i< n; i++){
        cin>>key>>value;
        m.insert(make_pair(key, value));
    }

    for(it = m.begin(); it!= m.end();it ++){
        int currentTime = it->first;
        int currentList = it->second;


    }




}
