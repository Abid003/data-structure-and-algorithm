#include<bits/stdc++.h>
using namespace std;

int euler_totein(int n)
{
    int result = n;

    for(int i = 2; i*i <=n ; i++)
    {
        if(n%i == 0)
        {
            while(n%i ==0)
                n /= i;

            result -= (result /i);
        }

        if(n>1)
            result = result - (result/n);
    }
    return result;



}


int main()
{
    int n = 8;
    cout<<euler_totein(n);

}
