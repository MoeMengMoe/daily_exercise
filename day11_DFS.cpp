#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
int a[24][4];
int total;
int S[]={1,2,3,4};
int grid[4][4];
int tmp[5];
bool check_status(){
    for(int i=1;i<=4;i++){
        if(tmp[i]!=1)return false;
    }
    return true;
}

bool check(){
    int check_tar[5]={0};

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            tmp[grid[j][i]]=1;
        }
        if(check_status()){
         
            check_tar[i]=1;
            memset(tmp,0,sizeof(tmp));
        }
        else return false;

    }
    
}
int main(){
    for(int i=0;i<24;i++){
        for(int j=0;j<4;j++){
            a[i][j]=S[j];
        }
        next_permutation(S,S+4);
    }
    // int T[]={1,2,3,4};
    

    for(int i1=0;i1<24;i1++){
        for(int i2=0;i2<24;i2++){
            for(int i3=0;i3<24;i3++){
                for(int i4=0;i4<24;i4++){
                    for(int m=0; m<4; m++) {
                        grid[0][m] = a[i1][m];
                        grid[1][m] = a[i2][m];
                        grid[2][m] = a[i3][m];
                        grid[3][m] = a[i4][m];
                    }
                    if(check())total++;

                }
            }
        }


    }

}