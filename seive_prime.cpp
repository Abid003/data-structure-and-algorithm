#include<bits/stdc++.h>
using namespace std;
typedef vector <int>vi;
bool is_prime[10000010];


vi seive(int up)
{
    vi primes;
    int size = up;
    for(int i= 0; i<10000010; i++)
        is_prime[i ]= true;

        is_prime[0] = is_prime[1]=   false;

        for (int i= 2; i<= size; ++i)
        {
            if(is_prime[i] )
            {
                for(int j = i*i; j<=size; j+= i)
                    is_prime [j ] = false;


                    primes.push_back(i);

            }
        }

        return primes;
}


vi prime_factor(int n)
{
    vi primes_upto = seive(n);
    vi factors;
    int pf_i = 0;
    int prime_factor =  primes_upto[pf_i];
    while(prime_factor*prime_factor <= n)
    {
        while(n%prime_factor == 0)
        {
            n/= prime_factor;
            factors.push_back(prime_factor);

        }
        prime_factor = primes_upto[pf_i++];
    }
    if(n!= 1)
        factors.push_back(n);

    return factors;

}


int main()
{
    int n;
    cin>>n;
    vi    prime  = prime_factor(n);
    for(int i = 0; i<prime.size(); ++i)
    {
        cout<<prime[i]<<" ";
    }




}
