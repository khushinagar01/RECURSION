#include<iostream>
using namespace std;
int factorial(int n)
{
    //BASE CASE 
    if (n==0 || n==1)
    {
     return 1;
    }
   //RECURSIVE CASE
    return n*factorial(n-1);
    
    

}
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int fact=factorial(n);
    cout<<"Factorial of a number "<<n <<" "<<"is:"<<fact<<endl;
    return 0;

}
