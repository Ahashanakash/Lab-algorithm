#include<bits/stdc++.h>
using namespace std;

inline int linear_search (int arr[],int x, int n){
    int i=0;
    for(i=0;i<n;i++){
        if(arr[i]==x){
            return i+1;
        }
    }
    return -1;
}

int main(){
    int i,x,arr[100],n;
    cout<<"How many numbers?"<<endl;
    cin>>n;
    cout<<"Enter numbers = "<<endl;
    
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number which you want to find = "<<endl;
    cin>>x;
    
    cout<<"Found at position "<<linear_search(arr,x,n)<<endl;

    return 0;
}