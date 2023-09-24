#include<bits/stdc++.h>
using namespace std;
bool check(int a[],int b[],int n,int m){
    if(n<m) return false;
    if(n>m) return false;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]) return false;
    }
    return true;
}
int main(){
    int t;cin>>t;
    cin.ignore();
    while(t--){
        int n,m;cin>>n>>m;
        int a[n],b[m];
        for(int &x:a) cin>>x;
        for(int &x:b) cin>>x;
        if(check(a,b,n,m)) cout<<"1"<<endl;
        else cout<<"0"<<endl;
    }
}
