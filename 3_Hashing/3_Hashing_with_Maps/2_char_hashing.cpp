//Charcter hashing using  unordered maps
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,q;
    string ch;
    char c;
    unordered_map<char,int> m;
    //pre computation
    cout<<"Enter the string:\n";
    getline(cin,ch);
    for(i=0;i<ch.size();i++){
        m[ch[i]]++;
    }
    //queries
    cout<<"Enter the number of queries:\n";
    cin>>q;
    while(q--){
        cout<<"Query: ";
        cin>>c;
        //fetch
        cout<<"The number of times "<<c<<" occurs: "<<m[c]<<"\n";
    }
    return 0;
}