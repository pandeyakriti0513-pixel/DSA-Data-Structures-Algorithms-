/*Given an array of integers, the task is to delete a given element from 
the array. If there are multiple occurrences of the element, we need to remove
only its first occurrence using custom method.

Input: arr[] = [10, 20, 20, 20 30], ele = 20
Output: [10, 20, 20, 30]*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {10,20,20,20,30};
    int n = v.size() , ele = 20 , i;

    //Printing initial array
    cout<<"INITIAL ARRAY:\n";
    for(i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    //Finding the element
    bool found = false;
    for(i=0;i<n;i++){
        if(found){
            v[i-1]=v[i];
        }
        else if (v[i]==ele){
            found = true;
        }
    }

    //Reducing array length
    if(found){
        n--;
    }

    //Printing final array
    cout<<"FINAL ARRAY:\n";
    for(i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    
    return 0;

}