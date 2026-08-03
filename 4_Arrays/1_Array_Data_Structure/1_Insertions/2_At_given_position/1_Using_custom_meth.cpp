/*Q.Given the array of integers, the task is to insert an element at a given position using
custom method.
ORIGINAL ARRAY=10,20,30,40
FINAL ARRAY=10,50,20,30,40
POS=2,ELE=50*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v= {10,20,30,40,0};
    int i,n=4,pos=2,ele=50;
    //Printing initial array
    for(i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //Addition of given element
    for(i=n-1;i>=pos-1;i--){
        v[i+1]=v[i];
    }
    v[pos-1]=ele;
    //Printing the final array after addition
    for(i=0;i<=n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
