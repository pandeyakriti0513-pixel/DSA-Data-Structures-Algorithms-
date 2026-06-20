#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,reverse=0,rem;
    cout<<"Enter the number"<<"\n";
    cin>>n;
    while(n>0){
        rem=n%10;
        reverse=(reverse*10)+rem;
        n=n/10;
    }
    cout<<"The reverse of the given number is "<<reverse;
    return 0;

}