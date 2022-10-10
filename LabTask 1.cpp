#include<bits/stdc++.h>
using namespace std;


int sum_of_div(int n)
{
    int sum = 0;

    for (int i=2; i*i<=n; i++)
    {

        if (n%i == 0)
        {

            if (i==(n/i))
               sum += i;
            else
                sum += (i + n/i);
        }
    }
    return sum ;
}




int main()
{
    int n = 10;
    cout <<sum_of_div(n);
    return 0;
}
