//Program for inserting the given element/s into the array at the beginning using custom method
//ARRAY: 10,20,30,40,50
//FINAL ARRAY: 100,10,20,30,40,50;
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {10,20,30,40,50,0};
    int i, n=5;
    cout<<"Initial array:\n";
    for(i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //Shifting each element 
    for(i=n-1;i>=0;i--){
        v[i+1]=v[i];
    }
    //Addition of element
    v[0]=100;
    //Printing final array
    cout<<"Final Array\n";
    for(i=0;i<=n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}