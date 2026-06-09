// Backtracking : Backtracking (or backtracing) in recursion refers to the phase
//when recursive calls start returning back after reaching the base case.
//Think of recursion as having two phases:
//1:Going down (making recursive calls)
//2:Coming back up (returning from recursive calls) ← this is the backtracking phase

//Q. Print the numbers from 1 to N linearly using backtracking//

#include<bits/stdc++.h>
using namespace std;
void print_Number(int n){
    if(n==0){
        return;
    }
    print_Number(n-1);
    cout<<n<<" ";
}
int main(){
    int num;
    cout<<"Enter the number:\n";
    cin>>num;
    print_Number(num);
    return 0;
}