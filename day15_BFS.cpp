#include<bits/stdc++.h>
using namespace std;
#define MAX 400
int n,m,ox,oy;
int is_visited[MAX][MAX];
int dx[]={-2,-1,1,2,-2,-1,1,2};
int dy[]={-1,-2,-2,-1,1,2,2,1};
typedef struct {
    int x;
    int y;
}pos;
queue<pos> Q;

int main(){
cin>>n>>m>>ox>>oy;
    memset(is_visited,-1,sizeof(is_visited));
    pos tmp={ox,oy};
    Q.push(tmp);
    is_visited[ox][oy]=0;
    while(!Q.empty()){
        pos curr=Q.front();
        Q.pop();
        int cx=curr.x;
        int cy=curr.y;
        for(int i=0;i<8;i++){
            int nx=cx+dx[i];int ny=cy+dy[i];
            if(nx>=1||nx<=n||ny>=1||ny<=m||is_visited[nx][ny]==-1){
                // Q.push(curr);
                is_visited[nx][ny]=is_visited[cx][cy]+1;
                pos tmp={nx,ny};
                Q.push(tmp);
            }
            else{continue;}
        }

    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<is_visited[i][j]<<" ";
        }
        cout<<endl;
    }
}