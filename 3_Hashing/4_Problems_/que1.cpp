//Write a program to count the frequencies of array elements
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n;
    cout<<"Enter the number of elements:\n";
    cin>>n;
    int arr[n];
    unordered_map<int,int> m;
    cout<<"Enter the elements:\n";
    for(i=0;i<n;i++){
        cin>>arr[i];
        m[arr[i]]++;
    }
    //frequency
    cout<<"The frequency of each array element is:\n";
    for(auto it: m){
        cout<<it.first<<"->"<<it.second<<"\n";
    }
}