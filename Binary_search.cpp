#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter size = ";
    cin>>n;
    int arr[n];
    cout<<"Enter numbers = ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x;
    cout<<"enter number to find = ";
    cin>>x;

    int left=0,right=n-1,mid=(left+right)/2;
    while(left<=right)
    {
        if(x==arr[mid]) 
        {
            cout<<"found at position "<<x;
            return 0;
        }
        else if(x<arr[mid])
        {
            right=mid-1;
            mid=(left+right)/2;
        }
        else if(x>arr[mid])
        {
            left=mid+1;
            mid=(left+right)/2;
        }
    }
    cout<<"position not found";
}