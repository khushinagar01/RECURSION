#include<iostream>
using namespace std;
int sumOfDigit(int n)
{  
    //Base case :return 0 if the number is 0.
    if(n==0)
    {
        return 0;
    }
    //Recursive case : add the last digit to the sum of the rest of the digit
    return (n%10 + sumOfDigit(n/10));
}
int main()
{
    int n;
    //Enter the number from the user
    cout<<"Enter the number:";
    cin>>n;
    //Call the recursive function and print the output
    int SUM=sumOfDigit(n);
    cout<<"Sum is:"<<SUM<<endl;
    return 0;
}
