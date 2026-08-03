/*Given an integer array arr[] and an integer ele the task is to the remove
all occurrences of ele from arr[] in-place and return the number of elements 
which are not equal to ele. If there are k number of elements which are not 
equal to ele then the input array arr[] should be modified such that the 
first k elements should contain the elements which are not equal to ele and 
then the remaining elements.

Note: The order of first k elements may be changed.

Input: arr[] = [0, 1, 3, 0, 2, 2, 4, 2], ele = 2
Output: 5*/

#include<bits/stdc++.h>
using namespace std;
int remove_all_occurrances(vector<int> &v,int ele){
    int i , k=0 , n=v.size();
    for(i=0;i<n;i++){
        if(ele!=v[i]){
            swap(v[k],v[i]);
            k++;
        }
    }
    return k;

}
int main(){
    vector<int> v = {0,1,3,0,2,2,4,2};
    int ele =2,i;
    
    cout<<"ARRAY:\n";
    for(i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    cout<<"OUTPUT:\n"<<remove_all_occurrances(v,ele);
    return 0;
}