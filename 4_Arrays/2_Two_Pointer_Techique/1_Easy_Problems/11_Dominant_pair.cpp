/*Given an even-sized array arr[] of length n. A dominant pair (i, j) is defined as:

i belongs to the first half of the array, (0 <= i < n/2)
j belongs to the second half of the array, (n/2 <= j < n)
The value at index i is at least five times the value at index j, (arr[i] >= 5 * arr[j])
The task is to find the count of total number of dominant pairs in the array.

Examples:

Input: arr[] = [10, 2, 2, 1]
Output: 2
Explanation: First half: [10, 2], Second half: [2, 1]. So valid pairs are: 

{0, 2}: 10 >= 5 × 2 
{0, 3}: 10 >= 5 × 1 
So, total dominant pairs = 2.*/

#include<bits/stdc++.h>
using namespace std;
int dominant_pair(vector<int> &v, int n){
    sort(v.begin(),v.begin()+n/2);
    sort(v.begin()+n/2,v.end());
    int dom_pair=0;
    int i=0;
    int j=n/2;

    while(i<n/2){
        

        while(j<n && v[i]>=5*v[j]){
            j++;
        }

        dom_pair+=j-n/2;

        i++;
    }
    
    return dom_pair;
}

int main(){
    vector<int> arr;
    int num;

    cout<<"Enter the number of elements in the array\n";
    cin>>num;

    cout<<"Enter the array\n";
    for(int i=0;i<num;i++){
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }

    int result = dominant_pair(arr,num);


    if(result==0){
        cout<<"No such pair exists";
    }
    else{
        cout<<"There are "<<result<<" dominant pairs";
    }
    return 0;
    
}