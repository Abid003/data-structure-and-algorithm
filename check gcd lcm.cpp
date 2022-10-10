
#include <bits/stdc++.h>
using namespace std;
void gcd(int n, int l)
{
    if(l%n == 0)
        cout<<n<<" "<<l<< endl;

    else cout<<-1;
}


int main()
{
   int n, l;
   int test;

   cin>>test;

   while(test--)
   {
       cin>>n>>l;
       gcd(n,l);
   }

}
