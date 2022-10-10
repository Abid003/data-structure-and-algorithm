#include<bits/stdc++.h>
using namespace std;
#define ll  long long int

int big_mod(ll base , ll power, ll mod)
{
    if(power == 0)
     return 1;

    else if(power % 2 == 0)
        return(big_mod(base, power/2, mod)*big_mod(base, power/2, mod))%mod;
     else
        return (big_mod(base, power-1, mod)* (base%mod))%mod;

}


int main()
{
    cout<< big_mod(2, 5, 3);
}
