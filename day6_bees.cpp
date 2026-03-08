#include<iostream>
#include<cstdio>
#define MAX 1005
long long sol[MAX];
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;

    sol[m]=1;
    sol[m+1]=1;
    sol[m+2]=2;
    for(int i=m+2;i<=n;i++){
        sol[i]=sol[i-1]+sol[i-2];
    }
    cout<<sol[n];


}