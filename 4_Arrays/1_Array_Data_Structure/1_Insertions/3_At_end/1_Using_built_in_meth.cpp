/*Given an array of integers, the task is to insert an element at the end of the array 
using built-in method.
Input: arr[] = [10, 20, 30, 40], ele = 50
Output: [10, 20, 30, 40, 50]*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {10,20,30,40};
    //printing initial array
    for(auto it : v){
        cout<<it<<" ";
    }
    cout<<endl;
    //addition of element
    v.emplace_back(50);
    //printing the final array
    for(auto it : v){
        cout<<it<<" ";
    }
    return 0;
}