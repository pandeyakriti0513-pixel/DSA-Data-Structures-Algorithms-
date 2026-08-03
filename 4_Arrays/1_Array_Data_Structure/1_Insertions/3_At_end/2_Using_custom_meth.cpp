/*Given an array of integers, the task is to insert an element at the end of the array,
using custom method.

Input: arr[] = [10, 20, 30, 40], ele = 50
Output: [10, 20, 30, 40, 50]*/


#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {10,20,30,40,0};
    int i,n=4,ele=50;
    //printing initial array
    cout<<"INITIAL ARRAY:\n";
    for(i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //addition of new element
    v[n]=ele;
    //Printing final array
    cout<<"FINAL ARRAY:\n";
    for(i=0;i<=n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}