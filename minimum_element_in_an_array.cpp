#include<iostream>
using namespace std;
int minElement(int arr[],int n)
{   
    //BASE CASE:if an array has only one element then return that element
    if(n==1)
    {
        return arr[0];
    }

    //Recursively find the minimum element in the rest of an array
    int minimum= minElement(arr,n-1);

    //Compare the last element with the minimum of the rest and return the smallest one
    return min(arr[n-1],minimum);
}
int main()
{
    int n;
    cout<<"Enter the number of element in an array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of an array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int result=minElement(arr,n);
    cout<<"Minimum element in an array is : "<<result<<endl;
    return 0;
}