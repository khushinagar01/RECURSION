#include<iostream>
using namespace std;
int decimalToBinary(int n)
{
    if(n==0)
     return 0;
    
    //RECURSIVE CASE
    decimalToBinary(n/2);

    //PRINT THE REMAINDER (BINARY EQUIVALENT)
    cout<< n%2;  

}
int main()
{
    int number;
    cout<<"Enter the decimal number:";
    cin>> number;
    cout<< "Binary Equivalent of decimal number is :";
    if(number==0)
    {
        cout<<"0";
    }
    else 
    {
        int binary_number=decimalToBinary(number);
        cout<<binary_number<<endl;
    }
    return 0;
}