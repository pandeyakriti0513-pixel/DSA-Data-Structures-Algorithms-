//Q. Write a program to print nth fibonacci term using multiple recursion calls//
#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n){
    if(n==0||n==1) return n;
    int first=fibonacci(n-1);
    int last= fibonacci(n-2);
    return first+last;
}
int main(){
    int num;
    cout<<"Enter the number:\n";
    cin>>num;
    printf("The term at index %d is equal to: %d",num,fibonacci(num));
    return 0;
}