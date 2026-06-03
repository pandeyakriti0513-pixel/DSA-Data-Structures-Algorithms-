#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,sum=0, real_num,rem,digits=0;
    cout<<"Enter the number"<<"\n";
    cin>>n;
    real_num=n;
    if(n<0){
        cout<<"Negative numbers can not be armstrong numbers";
    }
    while(n>0){
        digits++;
        n=n/10;
    }
    n=real_num;
    while(n>0){
        rem=n%10;
        sum=sum+(round)(pow(rem,digits));
        n=n/10;
    }
    if(real_num==sum){
        cout<<"ARMSTRONG NUMBER";
    }
    else{
        cout<<"Not an ARMSTRONG NUMBER";
    }
    return 0;
}