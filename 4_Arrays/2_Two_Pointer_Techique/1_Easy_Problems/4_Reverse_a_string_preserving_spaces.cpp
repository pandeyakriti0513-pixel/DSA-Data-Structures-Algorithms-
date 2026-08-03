/*Given a string s, reverse the string without altering the 
positions of the spaces.

Input  s = "Help others"
Output: sreh topleH 
*/
#include<bits/stdc++.h>
using namespace std;
void reverse_string(string& s){
    int n=s.size();//length of string
    int left=0;
    int right= n-1;
    while(left<right){
        if(s[left]==' '){
            left++;
            continue;
        }
        else if(s[right]==' '){
            right--;
            continue;
        }
        else{
        swap(s[left++],s[right--]);
        }
    }
    return;
}

int main(){
    string str = "Help others";
    cout<<"INITIAL STRING\n";
    for(auto it : str){
        cout<<it;
    }
    cout<<"\n";
    reverse_string(str);
    cout<<"REVERSED STRING\n";
    for(auto it : str){
        cout<<it;
    }
    return 0;

}

