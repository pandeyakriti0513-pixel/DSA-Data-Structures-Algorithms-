//Q. Write a program to check whether the enetered string is palindrome or not//
#include<bits/stdc++.h>
using namespace std;
bool palindrome(int i,string str,int size){
    int n=size-i-1;
    if(i>=size/2) return true;
    if(str[i]==str[n]) return palindrome(i+1,str,size);
    else return false;
}
int main(){
    string arr;
    cout<<"Enter the string:\n";
    cin>>arr;
    int size=arr.length();
    int result=palindrome(0,arr,size);
    if(result==true){
        cout<<"PALINDROME";
    }
    else cout<<"NOT A PALINDROME";
    return 0;
    
}