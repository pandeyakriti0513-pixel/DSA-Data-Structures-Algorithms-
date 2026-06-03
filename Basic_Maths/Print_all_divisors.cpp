#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    vector<int> small;
    vector<int> large;
    cout<<"Enter the number\n";
    cin>>n;
    for(i=1;i*i<=n;i++){
        if(n%i==0){
            small.emplace_back(i);
            if((n/i)!=i){
            large.emplace_back(n/i);
        }
        }
    }
    for(auto it : small){
        cout<<it<<" ";
    }
    for(auto it=large.rbegin();it!=large.rend();it++){
        cout<< *it<<" ";
    }
    return 0;

}