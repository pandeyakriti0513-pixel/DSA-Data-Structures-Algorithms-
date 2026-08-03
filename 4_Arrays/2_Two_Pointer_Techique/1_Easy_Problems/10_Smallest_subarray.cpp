/*Given an array arr[] of integers and a number x, the task is to find the 
smallest subarray with a sum strictly greater than x.

Input: x = 51, arr[] = [1, 4, 45, 6, 0, 19]
Output: 3
Explanation: Minimum length subarray is [4, 45, 6] */

#include<bits/stdc++.h>
using namespace std;
int smallest_subarray(vector<int> &arr,int target){
    int k = 0;
    int i = 0;
    int ans=INT_MAX;
    int sum = 0;
    
    while(i<arr.size()){
        while(i<arr.size() && sum<=target){
            sum+=arr[i];
            i++;
        }

        if(i==arr.size() && sum<=target){
            break;
        }

        while(k<i && sum-arr[k]>target){
            sum-=arr[k];
            k++;
        }

        ans=min(ans,i-k);

        sum-=arr[k];
        k++;
    }

    if(ans==INT_MAX){
        return 0;
    }
    return ans;
    
}

int main(){
    vector<int> v = {1, 4, 45, 6, 0, 19};
    int x = 51;
    int result = smallest_subarray(v,x);
    cout<<"The length of smallest subarray is "<<result;
    return 0;
}