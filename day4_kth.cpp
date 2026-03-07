#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    int a[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int cnt=unique(a,a+n)-a;

    cout<<cnt<<endl;
    for(int i=0;i<cnt;i++){
        cout<<a[i]<<" ";
    }
}