#include<bits/stdc++.h>
using namespace std;
int ans;
int cols[5][5];
int rows[5][5];
int square[5][5];

void dfs(int x){
    if(x>16){//这是个细节  一定要用大于目标  原因是要执行16完成就必须递归到17次时结束
        ans++;
        return;
    }

    int col=(x-1)%4+1;
    int row=(x-1)/4+1;
    int pos=(row-1)/2*2+(col-1)/2+1;
    for(int i=1;i<=4;i++){
        if(cols[col][i]==0&&rows[row][i]==0&&square[pos][i]==0){
            cols[col][i]=1;rows[row][i]=1;square[pos][i]=1;
            dfs(x+1);
            cols[col][i]=0;rows[row][i]=0;square[pos][i]=0;

        }
    }
}



int main(){
    dfs(1);
    cout<<ans;
    return 0;
}