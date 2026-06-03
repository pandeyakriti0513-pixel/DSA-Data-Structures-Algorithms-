#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,flag=0;
    cout<<"Enter the number"<<"\n";
    cin>>n;
    if(n<0){
        cout<<"Not a PRIME NUMBER (negative numbers can never be prime)";
    }
    else{
        for(i=1;i*i<=n;i++){
            if(n%i==0){
                flag++;
            }
        }
        if(flag==2){
            cout<<"PRIME NUMBER";
        }
        else{
            cout<<"Not a PRIME NUMBER";
        }
    }
    return 0;
}