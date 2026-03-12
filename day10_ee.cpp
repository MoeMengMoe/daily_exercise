#include<bits/stdc++.h>
using namespace std;

double A,B,C,D;
double delta=1e-4;

double res(double x){
    return A*x*x*x+B*x*x+C*x+D;
}
int main(){
    cin>>A>>B>>C>>D;
    // double x;
    for(int i=-100;i<=100;i++)
    {
        double l=i,r=i+1;
        
        if(fabs(res(l))<delta)printf("%.2lf ",l);
        else if(fabs(res(r))<delta)continue;
        else if(res(l)*res(r)<0){
            while(r-l>delta){
                double mid=(l+r)/2.0;
                if(res(r)*res(mid)>0){
                    r=mid;
                }
                else l=mid;
            }
            printf("%.2lf ",l);//注意格式化输出
        }
        
    }
}