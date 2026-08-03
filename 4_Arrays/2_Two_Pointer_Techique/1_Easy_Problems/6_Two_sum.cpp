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
    sort(arr.begin(),arr.end());
    int i=0;//first pointer leftmost
    int j=arr.size()-1;//second pointer rightmost
    int sum=0;
    while(i<j){
        sum=arr[i]+arr[j];
        if(sum>target){
            j--;
        }
        else if(sum<target){
            i++;
        }
        else{
            return true;
        }
    }
    return false;
}
int main(){
    vector<int> v = {0, -1, 2, -3, 1};
    int target = -2;
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

