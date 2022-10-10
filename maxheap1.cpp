#include<iostream>
using namespace std;


void max_heap(int *a, int m, int n){

    int j, t;
    t = a[m];
    j = 2*m;
    while(j<=n){
        if(j<n && a[j+1]>a[j]){
             j = j+1;
        }
    }


}

void build_maxheap(int *a, int n){
    int k;
    for (k = n/2; k>=1; k--){
        max_heap(a,k,n);
    }
}

int main(){
    int  n;
    cout<<"enter no of elements of array"<<endl;
    cin>>n;
    int a[30];

    for(int i = 0; i<n; i++){
        cout<<"enter elements";
        cin>>a[i];
    }

    build_maxheap(a,n);
}

