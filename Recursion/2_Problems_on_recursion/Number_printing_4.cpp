//Q. Print the numbers from N to 1 linearly using backtracking//
#include<bits/stdc++.h>
using namespace std;
void print_Number(int i,int n){
    if(i>n){
        return;
    }
    print_Number(i+1,n);
    cout<<i<<" ";
    return;
}
int main(){
    int num;
    cout<<"Enter the number\n";
    cin>>num;
    print_Number(1,num);
    return 0;
}