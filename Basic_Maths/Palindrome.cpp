#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,reverse=0,real_num,rem;
    cout<<"Enter the number"<<"\n";
    cin>>n;
    real_num=n;
    while(n>0){
        rem=n%10;
        reverse=(reverse*10)+rem;
        n=n/10;
    }
    if(reverse==real_num){
        cout<<"PALINDROME";
    }
    else{
        cout<<"NOT PALINDROME";
    }
    return 0;
}