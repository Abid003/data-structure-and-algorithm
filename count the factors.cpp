
#include <bits/stdc++.h>
using namespace std;

void countFactors(int n)
{
    int count =0;
    int store;

    while (n % 2 == 0)
    {

        store = 2;

        count =1 ;
        n = n/2;

    }

    for (int i = 3; i*i <= n; i = i + 2)
    {
        while (n % i == 0)
        {
            if(  store!= i)
            {
                count++;
            }

            n = n/i;
            store = n;
        }


    }
    if (n > 2)
        count ++;

    cout<<count;
}


int main()
{
    int n,l;
    int test;
    cin >> test;
    while(test--)
    {
        cin >> n ;
        countFactors(n);
    }


}
