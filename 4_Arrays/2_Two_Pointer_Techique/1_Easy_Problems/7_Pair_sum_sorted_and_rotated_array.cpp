/*Given an array arr[] of size n, which is sorted and then rotated around an 
unknown pivot, the task is to check whether there exists a pair of elements in 
the array whose sum is equal to a given target value.

Examples : 

Input: arr[] = [11, 15, 6, 8, 9, 10], target = 16
Output: true
Explanation: There is a pair (6, 10) with sum 16.*/

#include<bits/stdc++.h>
using namespace std;
bool two_sum(vector<int> &arr,int target){
    int large = max_element(arr.begin(),arr.end()) - arr.begin();
    int small = min_element(arr.begin(),arr.end()) - arr.begin();
    int n= arr.size();
    while(small!=large){
        int sum = arr[large]+arr[small];
        
        if(sum>target){
           large=(large-1+n)%n;
        }
        else if(sum<target){
            small=(small+1)%n;
        }
        else{
            return true;
        }
    }
    return false;
}

int main(){
    vector<int> v = {11, 15, 6, 8, 9, 10};
    int target = 16;
    cout<<"INPUT ARRAY\n";
    for(auto it : v){
        cout<<it<<" ";
    }
    int result = two_sum(v,target);
    if(result){
        cout<<"\ntrue";
    }
    else{
        cout<<"\nfalse";
    }
    return 0;
}