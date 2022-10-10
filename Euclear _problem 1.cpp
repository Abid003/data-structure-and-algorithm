#include <bits/stdc++.h>
using namespace std;

int euclear_f(int n)
{
    int result = n;
    for (int i = 2; i * i <= n; i++)
        {
        if (n % i == 0)
        {
            while (n % i == 0)
                n /= i;
            result =result- result / i;
        }
    }
    if (n > 1)
        result = result -result / n;
    return result;
}


int main()
{
    int n;
    int test;
    cin >> test;
    while(test--)
    {
        cin >> n;
        cout<<euclear_f(n)<<endl;
    }
}
