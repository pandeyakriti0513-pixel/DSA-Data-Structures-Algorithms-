//Q. Write a program to find missing number in an array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,num,i;
    map<int,int> mp;
    cout<<"Enter the number of elements in array:\n";
    cin>>n;
    cout<<"Enter the array\n";
    for(i=0;i<n;i++){
        cin>>num;
        mp[num]++;
    }
    auto it=mp.rbegin();
    cout<<"MISSING NUMBER:\n";
    for(i=1;i<=it->first;i++){
        if(mp[i]==0){
            cout<<i<<" ";
        }
    }
    return 0;
}
