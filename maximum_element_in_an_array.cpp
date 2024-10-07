#include<iostream>
using namespace std;
int maxElement(int arr[],int n)
{   
    //BASE CASE:if an array has only one element then return that element
    if(n==1)
    {
        return arr[0];
    }

    //Recursively find the maximum element in the rest of an array
    int maximum= maxElement(arr,n-1);

    //Compare the last element with the maximum of the rest and return the larger one
    return max(arr[n-1],maximum);
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
    int result=maxElement(arr,n);
    cout<<"Maximum element in an array is : "<<result<<endl;
    return 0;
}