#include<iostream>
using namespace std;
int productArrayElement(int arr[], int n)
{
    //BASE CASE:if the array has 0 element then it return 1
    if(n==0)
    {
        return 1;
    }
    //RECURSIVE CASE
    return arr[n-1]*productArrayElement(arr,n-1);
}
int main()
{
    int arr[]={1,2,3,4,5};
    int n =sizeof(arr)/sizeof(arr[0]);
    int product=productArrayElement(arr,n);
    cout<<"Product of array element is : "<<product<<endl;
    return 0;
}