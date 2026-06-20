//Character hashing using array
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    int i,q;
    char ch;
    cout<<"Enter the string:\n";
    cin>>str;
    int hash[256]={0};
    //pre computation
    for(i=0;i<str.size();i++){
        hash[str[i]]++;
    }
    cout<<"Enter the number of queries:\n";
    cin>>q;
    while(q--){
        cout<<"Query:\n";
        cin>>ch;
        //fetch
        cout<<"The number of times "<<ch<<" occurs: "<<hash[ch]<<"\n";
    }
    return 0;
}