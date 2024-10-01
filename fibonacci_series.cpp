#include<iostream>
using namespace std;
//Recursive funtion to find the nth fibonacci number
int fib(int n)
{   
    //Base case

    if(n==0)
    {
     return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    //Recursive case
    return fib(n-1)+fib(n-2);
      
}
int main()
{
    int n;
    //Take input from the user
    cout<<"Enter the number of terms:";
    cin>>n;
     
    //Print fibonacci series
    cout<<"Fibonacci Series:";
    for(int i=0;i<n;i++)
    {
        cout<<fib(i)<<" ";
    }
    cout<<endl;
    return 0;
     

}