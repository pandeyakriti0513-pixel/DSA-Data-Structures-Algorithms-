/*Given an array of integers, the task is to delete a given element from 
the array. If there are multiple occurrences of the element, we need to remove
only its first occurrence using built in method.

Input: arr[] = [10, 20, 20, 20 30], ele = 20
Output: [10, 20, 20, 30]*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {10,20,20,20,30} ;
    int ele = 20;

    //Printing the initial array
    cout<<"INITIAL ARRAY:\n";
    for(auto it : v){
        cout<<it<<" "<<"\n";
    }

    //Finding the first occurance of element
    auto it = find(v.begin(),v.end(),ele);

    //Removing the element
    if(it!=v.end()){
        v.erase(it);
    }
    else{
        cout<<"\nElement not found.\n";
    }

    //Printing the final array
    cout<<"FINAL ARRAY:\n";
    for(auto it : v){
        cout<<it<<" ";
    }

    return 0;

}