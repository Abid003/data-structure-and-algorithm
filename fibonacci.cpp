#include<iostream>
 using namespace std;
#define ll long long int

ll a[100];

ll fibonacci(ll n)
{

    if(a[n])
        return a[n];
    if(n<=1)
        return n;

    return a[n] = fibonacci(n-2)+fibonacci(n-1);
}

int main(){
    ll num;
    cin>>num;
  cout<<fibonacci(num)<<endl;

}
