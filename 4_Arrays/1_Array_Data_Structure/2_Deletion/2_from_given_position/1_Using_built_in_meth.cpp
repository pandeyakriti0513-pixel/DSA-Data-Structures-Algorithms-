/*Given an array of integers, the task is to delete an element from a given
position in the array, using built in method.

Input: arr[] = [10, 20, 30, 40], pos = 2
Output: [10, 30, 40]*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {10,20,30,40};
    int pos=2;
    //printing initial array
    cout<<"INITIAL ARRAY:\n";
    for(auto it : v){
        cout<<it<<" ";
    }
    cout<<endl;
    //deletion of element
    v.erase(v.begin()+(pos-1));
    //printing final array
    cout<<"FINAL ARRAY:\n";
    for(auto it : v){
        cout<<it<<" ";
    }
    return 0;
}