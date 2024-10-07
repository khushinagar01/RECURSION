#include<iostream>
using namespace std;
int sum(int n)
{   
    //BASE CASE
    if(n==0)
    {
     return 0;
    }
    //RECURSIVE CASE:RETURN N PLUS THE SUM OF PREVIOUS NUMBER
    return n+sum(n-1);
}
int main()
{
    int number;
    cout<<"Enter a positive number:";
    cin>>number;
    int result=sum(number);
    cout<<"Sum of " <<number <<" natural number is : "<<result;
    return 0;
}