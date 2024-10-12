#include<iostream>
using namespace std;
bool isArraySorted(int arr[],int n)
{
    //base case : if the array has 0 and 1 element the it is sorted
    if(n==1 || n==0)
    {
        return true;
    }
    else if(arr[n-1]<arr[n-2])
    {
        return false;
    }
    
    //recursive case
    return isArraySorted(arr,n-1);
}
int main()
{
    int arr[]={3,6,61,45,78,90};
    int n= sizeof(arr)/sizeof(arr[0]);

    if(isArraySorted(arr,n))
    {
        cout<<"THE ARRAY IS SORTED.";
    }
    else
    {
        cout<<"THE ARRAY IS NOT SORTED.";
    }
    return 0;
}