#include<bits/stdc++.h>
using namespace std;
int main(){
    int n_1,n_2,i;
    cout<<"Enter the two numbers\n";
    cin>>n_1>>n_2;
    n_1=abs(n_1);
    n_2=abs(n_2);
    i=max(n_1,n_2);
    if(n_1==0||n_2==0){
        cout<<"The lowest common multiple is 0";
        return 0;
    }
    while((i%n_1)!=0 || (i%n_2)!=0){
        i++;
    }
    cout<<"The lowest common multiple of "<<n_1<<" and "<<n_2<<" is "<<i;
    return 0;
}
