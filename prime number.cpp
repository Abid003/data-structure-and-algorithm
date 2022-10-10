#include<iostream>
using namespace std;

bool is_prime(int n)
{
    for(int i = 2;   i*i<=n; i++)
    {
        if(n%i == 0)
            return false;
        else return true;
    }
}

void sieve(int n)
{
    int a[n] = {0};

    for(int i=2;i<n; i++)
    {
        for(int j = i*i; j<n; j+=i)
        {
            a[j-1] = 1;
        }

    }
    a[0] = true;
    a[1 ] = true;
     for (int i = 1; i < 30; i++) {
      if (a[i - 1] == 0)
        cout << i << "\t";
   }
}

int main()
{
    int n =23;



    is_prime(n);

    cout<< is_prime(n)<<endl;

    sieve(n);
}
