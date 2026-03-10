#include<iostream>
#include<cstdio>
#define MAX 10000
using namespace std;
int ans=0,k;
int arr[MAX];

void findkth(int l,int r){
    int flag=arr[(l+r)/2];
    int i=l,j=r,tmp;
    if(l==r){ans=arr[i];return;}
    do{
        while(arr[i]<flag)i++;
        while(arr[j]>flag)j--;
        if(i<=j){tmp=arr[i];arr[i]=arr[j];arr[j]=tmp;i++;j--;}
    }while(i<=j);
    if(k<=j)findkth(l,j);
    else if(k>=i)findkth(i, r);
    else
     findkth(j+1, i-1);
}
int main(){
    int n;

    cin>>n;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>k;
    cout<<ans;
    
    
    
    

}