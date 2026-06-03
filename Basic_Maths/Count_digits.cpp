#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,digits=0;
    cout<<"Enter the number"<<"\n";
    cin>>n;
    while(n>0){
        digits++;
        n=n/10;
    }
    cout<<"The number of digits in the given number is "<<digits;
    return 0;
}