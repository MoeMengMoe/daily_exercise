#include<iostream>
using namespace std;
int checkBorder(int x,int y,int n,int m){
    if((x>=0&&x<n)&&(y>=0&&y<m))return 1;
    else return 0;
}
int main(){
    int mat[100][100]={0};
    int dx[]={-1,-1,-1,0,0,1,1,1};
    int dy[]={-1,0,1,-1,1,-1,0,1};
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char temp=0;
            cin>>temp;
            if(temp=='*')mat[i][j] = -1;
            
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]==0){
                for(int k=0;k<8;k++){
                    if(checkBorder(i+dx[k], j+dy[k], n, m)&&mat[i+dx[k]][j+dy[k]]==-1)mat[i][j]++;
                }
            }
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]==-1)cout<<"*";
            else cout<<mat[i][j];
            
        }
        cout<<endl;
    }
    
    
    
    
}