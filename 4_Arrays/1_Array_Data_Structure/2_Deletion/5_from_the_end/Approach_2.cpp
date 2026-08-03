/*Given an array of integers, the task is to delete an element from the 
end of the array using custom method.

Input: arr[] = [10, 20, 30, 40]
Output: [10, 20, 30]*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {10,20,30,40};
    int i, n= v.size();

    cout<<"INITIAL ARRAY:\n";
    for(i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    n--;
    cout<<"FINAL ARRAY:\n";
    for(i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
