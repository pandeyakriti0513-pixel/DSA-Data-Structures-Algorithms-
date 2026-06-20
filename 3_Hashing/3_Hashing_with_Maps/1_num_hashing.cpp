//Number Hashing using maps
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q,numbers,i,que;
    map<int,int> m;
    cout<<"Enter the number of elements:\n";
    cin>>n;
    //pre computation
    for(i=1;i<=n;i++){
        cin>>numbers;
        m[numbers]++;
    }
    //Queries
    cout<<"Enter the number of queries:\n";
    cin>>q;
    while(q--){
       cout<<"Query: ";
       cin>>que;
       //fetch
       cout<<"The number of times "<<que<<" occurs: "<<m[que]<<"\n"; 
    }
    return 0;
}