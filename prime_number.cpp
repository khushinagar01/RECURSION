#include<iostream>
using namespace std;
bool  isPrimeNumber(int n, int i=2)
{  
    //BASE CASE
   if(n<=1)
   {
    return false;
   }
   //IF DIVISIBLE NOT PRIME
   if(i*i>n)
   {
    return true;
   }
   if(n%i==0)
   {
    return false;
   }
   //RECURSIVE CASE FOR NEXT DIVISOR
   return isPrimeNumber(n,i+1);
}
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    if(isPrimeNumber(n))
    {
       cout<<n<<" is a prime number..";
    }
    else
    {
       cout<<n<<" is not a prime number..";
    }
    return 0;
}