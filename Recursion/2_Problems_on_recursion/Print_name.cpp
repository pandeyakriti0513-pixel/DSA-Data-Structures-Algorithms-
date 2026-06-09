//Q. To print a the entered name a certain number of times entered by the user//
#include<bits/stdc++.h>
using namespace std;
void print_Name(int n,string name){
    if(n==0) return;
    cout<<name<<"\n";
    print_Name(n-1,name);
    return;
}
int main(){
    int num;
    string user_name;
    cout<<"Enter the name that is to be printed"<<"\n";
    cin>>user_name;
    cout<<"Enter the number of times the string has to be printed"<<"\n";
    cin>>num;
    print_Name(num,user_name);
    return 0;
}