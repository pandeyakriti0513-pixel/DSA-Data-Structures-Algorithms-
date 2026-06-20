//Q. Write a program to reverse an array using recursion and only two parameters//
#include<bits/stdc++.h>
using namespace std;
void reverse_array(int i,int arr[],int size){
    int n=size-i-1;
    if(i>=size/2) return;
    swap(arr[i],arr[n]);
    reverse_array(i+1,arr,size);
}
int main(){
    int num,i;
    cout<<"Enter the number of elements:\n";
    cin>>num;
    int str[num];
    cout<<"Enter the elements:\n";
    for(i=0;i<=num-1;i++){
        cin>>str[i];
    }
    reverse_array(0,str,num);
    for(i=0;i<=num-1;i++){
        cout<<str[i]<<" ";
    }
    return 0;
}