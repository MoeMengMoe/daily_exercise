#include<iostream>
using namespace std;
void sort(int a[],int l,int r){
    int i=l,j=r,flag=a[(l+r)/2],tmp;
    do{
        while(a[i]<flag)i++;
        while(a[j]>flag)j--;
        if(i<=j){
            tmp=i;
            i=j;
            j=tmp;
            i++;
            j--;
        }
    }while(i<=j);
    if(l<j)sort(a,l,j);
    if(i<r)sort(a,i,r);
}

int main(){
    // int a[100];
    // int l,r,flag=(l+r)/2
    int a[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    
}