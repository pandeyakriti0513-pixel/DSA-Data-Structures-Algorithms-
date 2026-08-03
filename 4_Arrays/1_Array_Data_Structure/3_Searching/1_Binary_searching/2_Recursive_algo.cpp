/*Here we use a recursive function to continue the process of comparing the key and 
splitting the search space in two halves.
INPUT ARRAY: [10,20,30,40,50,60,70,80,90,100]
OUTPOUT: 5*/

#include<bits/stdc++.h>
using namespace std;
int Binary_search(int low,int high,vector<int> &arr,int ele){
    int mid = (low+high)/2;
    if(low<=high){
    if(arr[mid]==ele){
        return mid;
    }
    else if(arr[mid]<ele){
        return Binary_search(mid+1,high,arr,ele);
    }
    else if(arr[mid]>ele){
        return Binary_search(low,mid-1,arr,ele);
    }}

    return -1;

}
int main(){
    vector<int> v = {10,20,30,40,50,60,70,80,90,100};
    int n=v.size();
    int ele = 60;
    int result = Binary_search(0,n-1,v,ele);
    if(result!=-1){
        cout<<"Element found at index "<<result<<endl;
    }
    else{
        cout<<"Element not found.\n";
    }
    return 0;
}
