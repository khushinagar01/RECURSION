#include<iostream>
using namespace std;
//Recursive function to perform binary search
int binarySearch(int arr[],int s,int e,int target)
{
    if(e>=s)
    {
        int mid=s+(e-s)/2;
        //If the element present at the middle itself
        if(arr[mid]==target)
        {
            return mid;
        }
        //If the element is smaller than mid, search in the left half
        else if(arr[mid]>target)
        {
            return binarySearch(arr,s,mid-1,target);
        }
        //Otherwise, search in the right half
        else
        {
           return binarySearch(arr,mid+1,e,target);
        }
        //If the element is not found in the array
        return -1;
    }
}
int main()
{
    int n,target;
    cout<<"ENTER THE NUMBER OF ELEMENTS IN AN ARRAY : ";
    cin>>n;
    int arr[n];
    cout<<"ENTER THE SORTED ELEMENTS OF AN ARRAY : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"ENTER THE TARGET : ";
    cin>>target;
    int result=binarySearch(arr,0,n-1,target);
    if(result !=-1)
    {
        cout<<"Element found at index : "<<result<<endl;
    }
    else
    {
       cout<<"Element not found in the array."<<endl;
    }
    return 0;
}