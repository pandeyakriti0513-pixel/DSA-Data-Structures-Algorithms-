#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the first number";
    cin>>a;
    cout<<"Enter the other number";
    cin>>b;
    while(b!=0){
        c=a%b;
        a=b;
        b=c;
    }
    cout<<"The highest common factor is :"<<a;
    return 0; 

}
