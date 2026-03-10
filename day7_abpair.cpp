#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
long long a[1000000];
int n,c;
int main(){
    cin>>n>>c;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    long long times=0;
    for(int i=0;i<n;i++){
        times +=upper_bound(a,a+n,a[i]+c)-lower_bound(a,a+n,a[i]+c);
    }
    cout<<times;

}