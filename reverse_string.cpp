#include<iostream>
using namespace std;
void reverseString(string &str,int start,int end)
{   
    //BASE CASE
    if(start>=end)
     return;
    
    //SWAP CHARACTERS
    swap(str[start],str[end]);
    
    //RECURSIVE CALL
    reverseString(str,start+1,end-1);

}
int main()
{
    string str;
    cout<<"Enter a string:";
    getline(cin,str);
    reverseString(str,0,str.length()-1);
    cout<<"Reverse String:"<<str<<endl;
    return 0;
}