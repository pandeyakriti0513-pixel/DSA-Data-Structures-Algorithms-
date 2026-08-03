/*
Given an array arr[] consisting of only 0s, 1s, and 2s. The objective is to 
sort the array, i.e., put all 0s first, then all 1s and all 2s in last.

This problem is the same as the famous "Dutch National Flag problem".
Input: arr[] = [0, 1, 2, 0, 1, 2]
Output: [0, 0, 1, 1, 2, 2]

Input: arr[] = [0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1]
Output: [0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2]*/

#include<bits/stdc++.h>
using namespace std;
void sort012(vector<int> &arr){
    int low=0;
    int mid=0;
    int high = arr.size()-1;

    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid++],arr[low++]);
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high--]);
        }

    }
    return;
}

int main(){
    vector<int> v = {0, 1, 2, 0, 1, 2};
    cout<<"INITIAL ARRAY\n";
    for(auto it : v){
        cout<<it<<" ";
    }
    sort012(v);
    cout<<"\nFINAL ARRAY\n";
    for(auto it : v){
        cout<<it<<" ";
    }
    return 0;
}