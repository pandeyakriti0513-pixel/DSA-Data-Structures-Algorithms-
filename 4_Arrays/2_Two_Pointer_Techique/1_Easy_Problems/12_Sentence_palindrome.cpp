/*Given a sentence s, determine whether it is a palindrome sentence or not. A palindrome sentence is a sequence of characters that reads the same forward and backward after:

Converting all uppercase letters to lowercase.
Removing all non-alphanumeric characters (i.e., ignore spaces, punctuation, and symbols).
Examples: 

Input: s = "Too hot to hoot."
Output: true
Explanation: If we remove all non-alphanumeric characters and convert all uppercase letters to lowercase, string s will become "toohottohoot" which is a palindrome.
*/

#include<bits/stdc++.h>
using namespace std;

bool sentence_palindrome(string s){
    int n=s.size();
    int left=0;
    int right =n-1;

    while(left<right){
        if(s[left]>=65 && s[left]<=90){
            s[left]+=32;
        }
        if(s[right]>=65 && s[right]<=90){
            s[right]+=32;
        }

        if(((97<=s[left] && s[left]<=122) || (48<=s[left] && s[left]<=57)) &&
           ((97<=s[right] && s[right]<=122) || (48<=s[right] && s[right]<=57))){

            if(s[left]==s[right]){
                left++;
                right--;
            }

            else{
                return false;
            }
           }

           else if((97>s[left] || s[left]>122) && (48>s[left] || s[left]>57)){
                  left++;
           }
           else if((97>s[right] || s[right]>122) && (48>s[right] || s[right]>57)){
                  right--;
           }
        
    }


    
    return true;
}

int main(){
    string str;
    getline(cin,str);
    bool result=sentence_palindrome(str);
    if(result){
       cout<<"palindrome";
    }
    else{
        cout<<"not a palindrome";
    }
    return 0;

}