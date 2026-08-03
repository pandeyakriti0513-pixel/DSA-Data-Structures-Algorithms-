/*Given two arrays a[] and b[], and a positive integer x, 
find a pair (a[i], b[j]) such that the sum of a[i] and b[j] is closest to x, 
in other words the absolute difference |a[i] + b[j] - x| is minimized.

Input:  a[] = [1, 4, 5, 7], b[] = [10, 20, 30, 40], x = 32
Output:  [1, 30]
*/

#include<bits/stdc++.h>
using namespace std;
pair<int,int> closest_pair_2arr(vector<int> &a, vector<int> &b,int target){
    //since, arrays are sorted
    int left = 0;//first pointer
    int right = b.size()-1;//second pointer
    int best_diff=INT_MAX;
    /*since a[left] smallest element and b[right] is the largest element
    this on increasing left sum would increase and on decreasing right sum
    would decrease*/
    pair<int,int> best_pair = {a[left],b[right]};

    while(left<a.size() && right>=0){
        int sum = a[left]+b[right];
        
        if(abs(target-sum)<best_diff){
            best_diff = abs(target-sum);
            best_pair = {a[left],b[right]};
        }

        if(sum==target){
            return best_pair;
        }
        else if(sum<target){
            left++;
        }
        else if(sum>target){
            right--;
        }
    }

    return best_pair;
}

int main(){
    vector<int> a = {1, 4, 5, 7};
    vector<int> b = {10, 20, 30, 40};
    int target = 32;

    pair<int,int> result = closest_pair_2arr(a,b,target);
    
    cout<<"output "<<"("<<result.first<<","<<result.second<<")";
    return 0;

}