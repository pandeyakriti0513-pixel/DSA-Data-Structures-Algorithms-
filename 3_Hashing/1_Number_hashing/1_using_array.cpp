//Number hashing using arrays
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,q;
    cout<<"Enter the size of array:\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements:\n";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int hash[13]={0};//hash array or frquency array
    //pre computation
    for(i=0;i<n;i++){
        hash[arr[i]]+=1;
    }
    cout<<"Enter the number of queries:\n";
    cin>>q;
    int numbers;
    for(i=0;i<q;i++){
        cout<<"Queries\n";
        cin>>numbers;

    //fetch
        cout<<"Number of times "<<numbers<< " occurs:"<<hash[numbers]<<"\n";
    }
    return 0;
}