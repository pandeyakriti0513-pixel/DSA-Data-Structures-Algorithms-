/*Given an array arr[] of n integers and a target value, 
check if there exists a pair whose sum equals the target. 
This is a variation of the 2-Sum problem.

Input: arr[] = [0, -1, 2, -3, 1], target = -2
Output: true


Input: arr[] = [1, -2, 1, 0, 5], target = 0
Output: false
*/

#include<bits/stdc++.h>
using namespace std;

bool Two_sum(vector<int> &arr,int target){
    unordered_map<int,int> mp ;
    int i;
    for(i=0;i<arr.size();i++){
        int ele = target-arr[i];
        if(mp[ele]>0){
            return true;
        }
        mp[arr[i]]++;
    }
    return false;
}
int main(){
    vector<int> v = {0, -1, 2, -3, 1};
    int target = 3;
    cout<<"INPUT ARRAY\n";
    for(auto it : v){
        cout<<it<<" ";
    }
    cout<<"\nTARGET\n"<<target;
    bool result=Two_sum(v,target);
    if(result==true){
        cout<<"\ntrue";
    }
    else{
        cout<<"\nfalse";
    }
    return 0;
}

