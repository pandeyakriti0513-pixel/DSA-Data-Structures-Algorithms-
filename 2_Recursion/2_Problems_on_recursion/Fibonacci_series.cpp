//Write a program to generate a fibonacci series using recursion//
#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n){
    if(n<=1) return 0;
    if(n==2) return 1;

    return fibonacci(n-1)+fibonacci(n-2);
    
}
int main(){
    int i,num;
    cout<<"Enter the number of terms up to which the fibonacci series is to be printed\n";
    cin>>num;
    if(num<=0){
        cout<<"Invalid input, try again witha positive number";
        return 0;
    }
    for(i=1;i<=num;i++){
        cout<<fibonacci(i)<<" ";
    }
    return 0;
}