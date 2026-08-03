/*Given an array, arr[] of n integers, and an integer element x, find whether 
element x is present in the array. Return the index of the first occurrence 
of x in the array, or -1 if it doesn't exist.

Input: arr[] = [10, 8, 30, 4, 5], x = 5
Output: 4*/

#include<bits/stdc++.h>
using namespace std;
int LinearSearch(vector<int> &arr,int ele){
    int i;
    for(i=0;i<arr.size();i++){
        if(arr[i]==ele){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int> v = {10,8,30,4,5};
    int ele=5;
    int result=LinearSearch(v,ele);
    if(result!=-1){
        cout<<"Element found at index "<<result<<endl;
    }
    else{
        cout<<"Element not found.";
    }
    return 0;
}