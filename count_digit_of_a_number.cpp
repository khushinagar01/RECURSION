#include<iostream>
using namespace std;
int count_digit(int n)
{
    //BASE CASE
    if(n==0)
    {
     return 0;
    }
    //RECURSIVE CASE
    return 1+count_digit(n/10);
}
int main()
{
    int number;
    cout<<"Enter a number:";
    cin>>number;
    if(number==0)
    {
        cout<<"The number of digit is 1."<<endl;
    }
    else
    {
        int result=count_digit(abs(number));
        cout<<"The number of digit is : "<<result<<endl;
    }
    return 0;
}