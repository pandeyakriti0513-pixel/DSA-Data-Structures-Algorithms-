//Q. Print the numbers linearly from 1 to N//
#include<bits/stdc++.h>
using namespace std;
void print_Number(int i,int n){
    if(i>n){
        return;
    }
    cout<<i<<" ";
    print_Number(i+1,n);
}
int main(){
    int num;
    cout<<"Enter the number\n";
    cin>>num;
    print_Number(1,num);
    return 0;
}