#include<bits/stdc++.h>
using namespace std;
long long n,m;
int ans;
long long tree[10000000];
int maxm;
bool p(int mid){
    long long sum=0;
    for(int i=0;i<n;i++){
        if(mid<tree[i]){
            sum+=tree[i]-mid;
        }
    }
    if(sum>=m)return true;
    return false;
}
int find(){
    int l=0,r=maxm;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(p(mid)){
            ans=mid;
            l=mid+1;
        }
        else r=mid-1;
    }
    return ans;

}

int main(){
    cin>>n>>m;
    
    for(int i=0;i<n;i++){
        cin>>tree[i];
        if(tree[i]>maxm)maxm=tree[i];
    }
    int ans=find();
    cout<<ans;

}