//Q. Write a program to reverse the array using three parameters//
#include<bits/stdc++.h>
using namespace std;
void reverse_array(int left,int right,int arr[]){
    if(left>=right) return;
    swap(arr[left],arr[right]);
    reverse_array(left+1,right-1,arr);
    return;
}
int main(){
    int num,i;
    cout<<"Enter the number of elements in the array:\n";
    cin>>num;
    int str[num];
    cout<<"Enter the elements:\n";
    for(i=0;i<=num-1;i++) cin>>str[i];
    reverse_array(0,num-1,str);
    for(i=0;i<=num-1;i++) cout<<str[i]<<" ";
    return 0;
}