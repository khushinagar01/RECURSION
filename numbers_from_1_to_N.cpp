#include<iostream>
using namespace std;
void printNumbers(int i,int n)
{
    //BASE CASE:if i exceed N recursion stop
    if(i>n)
    {
        return;
    }
    //PRINT THE CURRENT NUMBER
    cout <<i <<" ";
    //RECURSIVE CALL TO PRINT THE NEXT NUMBER
    printNumbers(i+1,n);
}

int main()
{
    int n;
    cout <<"ENTER A NUMBER:";
    cin>>n;
    printNumbers(1,n);
    cout << endl;
    return 0;

}