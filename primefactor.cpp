vi prime_factor(int n )
{
    vi primes_upto = seive(n);

    vi factor;
    int pf_i = 0;

    int prime_factor = primes_upto[pf_i];


    for(prime_factor = primes [pf_i++]; prime_factor <= n)
    {
        while(n% prime_factor == 0)
    }


}
