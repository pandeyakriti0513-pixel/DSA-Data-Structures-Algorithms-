//Program to insert a given element at the beginning of an array using built in methods
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,num,ele;
    vector<int> v;
    cout<<"Enter the number of elements to be added:\n";
    cin>>n;
    cout<<"Enter the number of elements in the array:\n";
    cin>>num;
    //Inserting elements into array
    cout<<"Enter the array:\n";
    for(i=0;i<num;i++){
        cin>>ele;
        v.emplace_back(ele);
    }
    //Printing array before adding the elements
    cout<<"INITIAL ARRAY:\n";
    for(auto it : v){
        cout<<it <<" ";
    }
    //Adding elements
    cout<<"\nEnter the elements to be added:\n";
    for(i=0;i<n;i++){
        cin>>ele;
        v.insert(v.begin()+i,ele);
    }
    //Printing the new array
    cout<<"FINAL ARRAY:\n";
    for(auto it : v){
        cout<<it<<" ";
    }
    return 0;

} 