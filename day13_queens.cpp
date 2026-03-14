#include<bits/stdc++.h>
using namespace std;
#define MAX 100
int row[MAX],O1[MAX],O2[MAX],res[MAX];
int n;
int ans;
void dfs(int x){
    if(x>n){
        ans++;
        if(ans<=3){
            for(int i=1;i<=n;i++){
                cout<<res[i]<<" ";
                
            }
            cout<<endl;
        }
        return;
    }
    
    for(int i=1;i<=n;i++){
        if(row[i]==0&&O1[i+x]==0&&O2[x-i+20]==0){
            res[x]=i;
            row[i]=1;O1[i+x]=1;O2[x-i+20]=1;
            dfs(x+1);
            row[i]=0;O1[i+x]=0;O2[x-i+20]=0;
        }
    }
}


int main(){
    cin>>n;
    dfs(1);
    cout<<ans;

}