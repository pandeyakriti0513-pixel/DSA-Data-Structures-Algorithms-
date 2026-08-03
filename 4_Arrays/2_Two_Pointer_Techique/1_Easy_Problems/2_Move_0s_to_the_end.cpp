/*Given an array of integers arr[], move all the zeros to the end of the 
array while maintaining the relative order of all non-zero elements.
Input: arr[] = [1, 2, 0, 4, 3, 0, 5, 0]
Output: [1, 2, 4, 3, 5, 0, 0, 0]
Explanation: There are three 0s that are moved to the end.*/

#include<bits/stdc++.h>
using namespace std;
void move_to_the_end(vector<int> &arr){
    int k=0;
    int i;
    for(i=0;i<arr.size();i++){
        if(arr[i]!=0){
            swap(arr[i],arr[k]);
            k++;
        }
    }
    return;
}

int main(){
    vector<int> v = {1,2,0,4,3,0,5,0};
    int i;
    cout<<"INITIAL ARRAY\n";
    for(i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    move_to_the_end(v);
    cout<<"\nFINAL ARRAY\n";
    for(i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;

}