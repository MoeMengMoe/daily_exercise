#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int a[10000];
int n,aim;
int find(int aim){
    int l=1,r=n;
    while(l<r){
        // int mid=(l+r)/2;
        // if(a[mid]==aim){
        //     return mid;
        // }
        // else if(aim<a[mid]){
        //     r=mid-1;
        // }else l=mid+1;
        //find the smallest index of the target
        int mid= l+(r-l)/2;
        if(a[mid]>=aim)r=mid;  
        else l=mid+1;
    }
    // if(l==r)return l;
    if(a[l]==aim)return l;
    else return -1;
}

int main(){

    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    cin>>aim;

    int ans=find(aim);
    cout<<ans;



}