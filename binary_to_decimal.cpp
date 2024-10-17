#include<iostream>
using namespace std;
int binaryToDecimal(int binary,int base=1)
{    
    
    //BASE CASE
    if(binary==0)
     return 0;
    
    //GET THE LAST DIGIT.
    int lastDigit=binary%10;
   
    //RECURSIVE CALL
    return lastDigit*base + binaryToDecimal(binary/10,base*2);
}
int main()
{
    int binary;
    cout<<"Enter the binary number:";
    cin>>binary;
    cout<<"Decimal equivalent: "<<binaryToDecimal(binary)<<endl;
    return 0;
}
