//Q. Write a program to find the sum of first n numbers using functional recursion//
#include<bits/stdc++.h>
using namespace std;
int sum_of_num(int n){
    if(n==0){
        return 0;
    }
    return n+sum_of_num(n-1);

}
int main(){
    int num,sum;
    cout<<"Enter the number:\n";
    cin>>num;
    sum=sum_of_num(num);
    cout<<"The sum of first "<<num<<" numbers is equal to "<<sum;
    return 0;
}