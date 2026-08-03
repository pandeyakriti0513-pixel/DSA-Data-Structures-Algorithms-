/*Here we use a while loop to continue the process of comparing the key and 
splitting the search space in two halves.
INPUT ARRAY: [10,20,30,40,50,60,70,80,90,100]
OUTPOUT: 5*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {10,20,30,40,50,60,70,80,90,100};
    int low=0,high=v.size()-1,ele=60;

    while(low<=high){
        int mid=(low+high)/2;

        if(v[mid]==ele){
            cout<<"Element found at index "<<mid;
            return 0;
        }
        else if(v[mid]<ele){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }


    return 0;
}