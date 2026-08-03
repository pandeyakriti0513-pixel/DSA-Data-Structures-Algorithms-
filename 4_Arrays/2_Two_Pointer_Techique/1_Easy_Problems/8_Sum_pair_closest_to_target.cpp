/*Given an array arr[] and a number target, find a pair of elements (a, b) in 
arr[], where a ≤ b whose sum is closest to target.

Note: Return the pair in sorted order and if there are multiple such pairs 
return the pair with maximum absolute difference. If no such pair exists return 
an empty array.

Input: arr[] = [5, 2, 7, 1, 4], target = 10
Output: [2, 7]
Explanation: As (4, 5), (2, 7) and (4, 7) both are closest to 10, but absolute 
difference of (4, 5) is 1, (2, 7) is 5 and (4, 7) is 3. Hence, [2, 7] has 
maximum absolute difference and closest to target. */

#include<bits/stdc++.h>
using namespace std;
pair<int,int> closest_pair(vector<int> &arr,int target){
    /*sorting the array so that we can apply two pointer technique*/
    sort(arr.begin(),arr.end());
    int left=0;//first pointer
    int right=arr.size()-1;//second pointer
    pair<int,int> best_pair={arr[left],arr[right]};
    int best_diff=INT_MAX;
    
    while(left<right){
        int sum=arr[left]+arr[right];

        /*to update the value of best_pair and best_diff*/
        if(abs(target-sum)<best_diff){
            best_diff=abs(target-sum);
            best_pair={arr[left],arr[right]};
        }

        /*to move the pointers in a way so that their sum moves closer to 
        target*/
        if(target==sum){
            return best_pair;
        }
        else if(target<sum){
            right--;
        }
        else if(target>sum){
            left++;
        }
    }
    return best_pair;
}

int main(){
    vector<int> v = {5, 2, 7, 1, 4};
    int target = 10;
    cout<<"INPUT ARRAY\n";
    for(auto it : v){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<"Target: "<<target;
    pair<int,int> result= closest_pair(v,target);
    
    cout<<"\nClosest sum pair => ("<<result.first<<","<<result.second<<")";
    return 0;
}