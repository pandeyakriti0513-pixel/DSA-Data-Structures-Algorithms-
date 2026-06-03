#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the first number";
    cin>>a;
    cout<<"Enter the other number";
    cin>>b;
    
    if(a>b){
        c=b;
        while(a%b>0){
            b=a%b;
            a=c;
            
        }
        cout<<"The highest common factor is : "<<b;
    }
    else{
        c=a;
        while(b%a>0){
            a=b%a;
            b=c;
            
        cout<<"The highest common factor is : "<<a;
        
    }}
    return 0; 

}