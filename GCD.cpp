#include<iostream>
using namespace std;
int gcd(int a, int b)
{  
    //BASE CASE
    if(b==0)
     return a;
    
    //RECURSIVE CASE
    return gcd(b,a%b);
}

int main()
{
   int n1, n2;
   cout<<"Enter two numbers:";
   cin>>n1>>n2;
   
   cout<<"GCD of "<<n1<< " "<<"and "<<n2<<" "<<"is "<<gcd(n1,n2)<<endl;

}