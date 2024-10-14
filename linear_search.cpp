#include<iostream>
using namespace std;
int linearSearch(int arr[],int size,int target,int index=0)
{
    //BASE CASE: if the index exceeds size, the element is not found
    if(index>=size)
    {
        return -1;
    }
    //if the element at the current index match the target and return the index.
    if(arr[index]==target)
    {
        return index;
    }
    //RECURSIVE CASE
    return linearSearch(arr,size,target,index+1);
}
int main()
{
   int arr[]={2,3,56,89,44};
   int n=sizeof(arr)/sizeof(arr[n]);
   int target;
   cout<<"Enter the element to be search : ";
   cin>>target;
   int result=linearSearch(arr,n,target);
   if(result !=-1)
   {
    cout<<"Element found at index : "<<result<<endl;
   }
   else
   {
    cout<<"Element not found in the array.";
   }
   return 0;
}