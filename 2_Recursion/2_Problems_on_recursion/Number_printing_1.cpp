//Q. Print the numbers linearly from N to 1//
#include<bits/stdc++.h>
using namespace std;
void print_Number(int n){
    if(n==0) return;
    cout<<n<<" ";
    print_Number(n-1);
}
int main(){
    int num;
    cout<<"Enter the number"<<"\n";
    cin>>num;
    print_Number(num);
    return 0;
}