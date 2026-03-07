#include<iostream>
#include<cstdio>
#define MAX 22
using namespace std;
int ctrl[MAX][MAX];
long long dp[MAX][MAX];
int dx[]={0,-1,-2,-2,-1,1,2,2,1};
int dy[]={0,-2,-1,1,2,-2,-1,1,2};
int main(){
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    int tmpx=n;
    int tmpy=m;

    for(int k=0;k<=8;k++){
        tmpx=n;
        tmpy=m;
        tmpx+=dx[k];
        tmpy+=dy[k];
        if(tmpx>=0&&tmpx<=n&&tmpy>=0&&tmpy<=m)
        ctrl[tmpx][tmpy]=1;
    }
    if(!ctrl[0][0])dp[0][0]=1;
    // for(int i=0;i<MAX;i++){
    //     if(ctrl[i][0]!=1)dp[i][0]=1;
    //     else if(ctrl[0][i]!=1)dp[0][i]=1;
    //     else if(ctrl[i][0]!=0)dp[i][0]=0;
    //     else if(ctrl[0][i]!=0)dp[0][i]=0;

    // }

    for(int i=0;i<=x;i++){
        for(int j=0;j<=y;j++){
            if (ctrl[i][j] == 1) continue;
            if(i!=0)dp[i][j]+=dp[i-1][j];
            if(j!=0)dp[i][j]+=dp[i][j-1];
            // if(ctrl[0][0]==1)dp[i][j]=0;
        }
    }

    cout<<dp[x][y];

}
