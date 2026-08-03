/* Given an array of integers, the task is to insert an element at a given position using 
built-in methods
INPUT ARRAY= 10,20,30,40
OUTPUT ARRAY= 10,50,20,30,40
POS=2,ELE=50 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {10,20,30,40};
    int pos=2, ele=50;
    //Printing the initial array
    cout<<"INITIAL ARRAY:\n";
    for(auto it : v){
        cout<<it<<" ";
    }
    cout<<endl;
    //Addition of given element
    v.insert(v.begin()+(pos-1),ele);
    //Printing the final array
    cout<<"FINAL ARRAY:\n";
    for(auto it : v){
        cout<<it<<" ";
    }
    return 0;
}