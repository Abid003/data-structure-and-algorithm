#include<bits/stdc++.h>
#include<map>
#include<iterator>

using namespace std;

int main()
{

    int n;
    cin>>n;

    int start[n], finish;

    multimap<int, int> m;
    map <int, int>::iterator it;

  //  freopen("activities.txt","r",stdin);

    for(int i= 0; i<n; i++)
    {
        cin>>start[i]>>finish;
        m.insert(make_pair(finish,i));
    }
    for(it = m.begin(); it!= m.end(); it++)
    {
        int finishTime = it->first;
        int serial = it->second;
       // cout<<serial<<" "<<start[serial]<<" "<<finishTime<<" "<<endl;
    }
    int count  = 0;
    cout<<endl;
    cout<<"output"<<endl;

    int  i = 0, currentTime = 0;
    for(it = m.begin(); it!= m.end(); it++)
    {

        int serial = it->second;
        int finishTime = it->first;

        if(start[serial] >= currentTime)
        {
            // cout<<
            count++;
             currentTime = finishTime;
         //   cout<<count<< " activities selected"<<" "<<start[serial]<<" "<<currentTime<<endl ;

        }


        // cout<<count<< " activities selected"<<endl;
    }
    cout<<count;




}
