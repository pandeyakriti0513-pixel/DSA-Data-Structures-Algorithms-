/*Given an array of integers, the task is to delete an element from a given
position in the array, using built in method.

Input: arr[] = [10, 20, 30, 40], pos = 2
Output: [10, 30, 40]*/


#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {10,20,30,40};
    int i, n = v.size(), pos = 2;
    //printing initial array
    cout<<"INITIAL ARRAY:\n";
    for(i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //deletion of element
    for(i=pos;i<n;i++){
        v[i-1]=v[i];
    }
    n--;
    //printing the final array
    for(i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}