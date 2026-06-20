//Character hashing using array, the elements belong to lowercase only
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    int i,q;
    char ch;
    cout<<"Enter the string:\n";
    cin>>str;
    int hash[26]={0};
    //pre computation
    for(i=0;i<str.size();i++){
        hash[str[i]-'a']++;
    }
    cout<<"Enter the number of queries:\n";
    cin>>q;
    while(q--){
        cout<<"Query:\n";
        cin>>ch;
        //fetch
        cout<<"The number of times "<<ch<<" occurs: "<<hash[ch-'a']<<"\n";
    }
    return 0;
}