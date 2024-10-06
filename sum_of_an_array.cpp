#include<iostream>
using namespace std;
int arraySum(int arr[],int n)
{   
    //BASE CASE
    if(n==0)
    {
        return 0;
    }
    //RECURSIVE CASE
    return arr[n-1] + arraySum(arr,n-1);
}
int main()
{
    int n;
    cout<<"ENTER THE NUMBER OF ELEMENTS IN AN ARRAY : ";
    cin>>n;
    int arr[n];
    cout<<"ENTER THE ELEMENTS OF ARRAY : ";
    for(int i=0;i<n;i++)
    {
         cin>>arr[i];
    }
    int result=arraySum(arr,n);
    cout<<"SUM OF AN ARRAY IS : "<<result<<endl;
    return 0;
}