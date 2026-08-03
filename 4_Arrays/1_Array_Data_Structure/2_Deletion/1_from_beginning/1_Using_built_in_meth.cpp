/*Given an array of integers, the task is to delete an element from the beginning of
the array., using built in method.

Input: arr[] = [10, 20, 30, 40]
Output: [20, 30, 40]*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {10,20,30,40};
    //Printing the initial array
    cout<<"INITIAL ARRAY:\n";
    for(auto it : v){
        cout<<it<<" ";
    }
    cout<<endl;
    //deletion of the element
    v.erase(v.begin());
    //printing final array
    cout<<"FINAL ARRAY:\n";
    for(auto it : v){
        cout<<it<<" ";
    }
    return 0;
}