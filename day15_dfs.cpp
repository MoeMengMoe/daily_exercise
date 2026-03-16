#include<bits/stdc++.h>
using namespace std;
#define MAX 200
int k[MAX],is_visted[MAX];
int n,a,b;
typedef struct{
    int floor;
    int times;
}node;
queue<node> Q;
int main(){
    cin>>n>>a>>b;
    node tmp={a,0};
    int resf=0,rest=0;
    for(int i=1;i<=n;i++){
        cin>>k[i];
    }
    Q.push(tmp);
    while(!Q.empty()){
        
        node curr=Q.front();
        Q.pop();
        int cf=curr.floor;
        int ct=curr.times;
        if(cf==b){resf=cf;rest=ct; break;}
        for(int dir=-1;dir<=1;dir=dir+2){
            int nf=cf+k[cf]*dir;
            if(nf>=1&&nf<=n&&is_visted[nf]==0){
                int nt=ct+1;
                is_visted[nf]=1;
                node tmp={nf,nt};
                Q.push(tmp);

            }
        }

    }
    if(resf==b){
        cout<<rest;
    }else{
        cout<<"-1";
    }


}
