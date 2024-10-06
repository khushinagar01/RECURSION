#include<iostream>
using namespace std;
void printNumbers(int n)
{
    //BASE CASE:stop when N is less than 1
    if(n<1)
    {
        return;
    }
    //PRINT THE CURRENT NUMBER
    cout <<n <<" ";
    //RECURSIVE CALL WITH NEXT NUMBER
    printNumbers(n-1);
}

int main()
{
    int n;
    cout <<"ENTER A NUMBER:";
    cin>>n;
    printNumbers(n);
    cout << endl;
    return 0;

}