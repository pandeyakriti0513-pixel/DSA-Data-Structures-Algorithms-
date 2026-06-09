//Q.Write the sum of first n numbers using parameterised recursion//
#include<bits/stdc++.h>
using namespace std;
void sum_of_num(int n,int sum){
    if(n==0){
        cout<<sum;
        return;
    }
    sum_of_num(n-1,sum+n);
    return;
}
int main(){
    int num;
    cout<<"Enter the number:\n";
    cin>>num;
    sum_of_num(num,0);
    return 0;
}