//Q.Write a program to print the highest and lowest frequency element
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,num;
    unordered_map<int,int> m;
    cout<<"Enter the number of elements:\n";
    cin>>n;
    cout<<"Enter the elements:\n";
    //pre computation
    while(n>0){
        cin>>num;
        m[num]++;
        n--;
    }
    //finding lowest and highest frequency
    auto it= m.begin();
    int lowest=it->second;
    int highest=it->second;
    for(auto it: m){
        if(it.second<lowest){
            lowest=it.second;
        }
        if(it.second>highest){
            highest=it.second;
        }
    }
    //lowest frequency elements
    cout<<"Lowest frequency element/s: \n";
    for(auto it : m){
        if(lowest==it.second){
            cout<<it.first<<" ";
        }
    }
    cout<<"\n";
    //highest frequency elements
    cout<<"Highest frequency element/s: \n";
    for(auto it : m){
        if(highest==it.second){
            cout<<it.first<<" ";
        }
    }
    return 0;
}