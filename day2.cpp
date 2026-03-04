#include<iostream>
#include<cstdio>
#include<cmath>
#define MAXN 100
using namespace std;
int checkBorder(int x,int y,int n){
	if((x>=0&&x<n)&&(y>=0&&y<n))return 1;
	else return 0;
} 
int main () {
	int n;
	cin>>n;
	int mat[MAXN][MAXN]={0};
	int torch,light;
	cin>>torch>>light;
//	int pos_tor[MAXN][MAXN]={0};
//	int pos_lgt[MAXN][MAxn]={0};
	for(int i=0;i<torch;i++){
		int x,y;
		cin>>x>>y;
		x--;
		y--;
//		int dx=-2,dy=-2;
//		pos_tor[x-1][y-1]=1;
//		while(abs(dx)+abs(dy)<=2){
			for(int dx=-2;dx<=2;dx++){
				for(int dy=-2;dy<=2;dy++){
					if(checkBorder(x+dx,y+dy,n)&&abs(dx)+abs(dy)<=2){
						mat[x+dx][y+dy]=1;
					}
				}
			}
//		}
		
	}
	for(int i=0;i<light;i++){
		int x,y;
		cin>>x>>y;
		x--;
		y--;
		
		for(int dx=-2;dx<=2;dx++){
				for(int dy=-2;dy<=2;dy++){
					if(checkBorder(x+dx,y+dy,n)){
						mat[x+dx][y+dy]=1;
					}
				}
			}
//		pos_lgt[x-1][y-1]=1;
	}
	
	int cnt=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(mat[i][j]==0)cnt++;
		}
	}
	cout<<cnt<<endl;
}
