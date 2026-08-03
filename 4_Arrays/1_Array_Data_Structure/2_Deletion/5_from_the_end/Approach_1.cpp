/*Given an array of integers, the task is to delete an element from the 
end of the array using built in method.

Input: arr[] = [10, 20, 30, 40]
Output: [10, 20, 30]*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {10,20,30,40};

    cout<<"INITIAL ARRAY:\n";
    for(auto it : v){
        cout<<it<<" ";
    }
    cout<<endl;
    v.pop_back();

    cout<<"FINAL ARRAY:\n";
    for(auto it : v){
        cout<<it<<" ";
    }
    return 0;
}