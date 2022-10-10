#include<iostream>
 using namespace std;


 int gcd(int a, int b)///a =16  b =10
 {

     if(b ==0 )
         return a;
     else
        return gcd(b, a%b);
 }

int lcm(int a, int b)
{
    return ((a*b)/gcd(a, b));

}
 int main()
 {
     int n , a,b;
     cin>>n;
     for(int i = 0; i<n; i++ ){ // count how many times you want to calculate gcd lcm
        cin>>a>>b;
     gcd(a,b);// call gcd function
}
     cout<<"gcd = "<<gcd(a,b)<<endl;
        cout<<"lcm = "<<lcm(a,b);




 }
