/*Given a sorted array arr[] of size n, the goal is to rearrange the array so 
that all distinct elements appear at the beginning in sorted order. 
Additionally, return the length of this distinct sorted subarray.

Note: The elements after the distinct ones can be in any order and hold any 
value, as they don't affect the result.

Input: arr[] = [1, 2, 2, 3, 4, 4, 4, 5, 5]
Output: [1, 2, 3, 4, 5]
*/

#include<bits/stdc++.h>
using namespace std;
int remove_duplicates(vector<int> &arr){
    int n=arr.size();
    int i ; //fast pointer
    int k=1; //slow pointer
    //if n=0 or n=1 no duplicates could exist 
    if(n<=1){
        return n;
    }
    //the loop starts from 1 because the first element is always unique
    for(i=1;i<n;i++){
        if(arr[i]!=arr[i-1]){
            arr[k++]=arr[i];
        }
    }
    
    return k;   /*k= index after the index of the last unique element 
                     in the modified array*/
}

int main(){
    vector<int> v ={1, 2, 2, 3, 4, 4, 4, 5, 5};
    int i = 0;
    cout<<"INITIAL ARRAY\n";
    for(i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    int result = remove_duplicates(v);

    cout<<"\nFINAL ARRAY\n";
    for(i=0;i<result;i++){
        cout<<v[i]<<" ";
    }
    
    return 0;
}
