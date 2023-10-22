#include<bits/stdc++.h>
using namespace std;
int n,ok,a[100];
void ktao(){
    for(int i=1;i<=n;i++){
        a[i]=0;
    }
}
void sinh(){
    int i=n;
    while(i>=1 && a[i]==1){
        a[i]=0;
        i--;
    }
    if(i==0){
        ok=0;
    }else{
        a[i]=1;
    }
}
int main(){
    cin>>n;
    ok=1;
    ktao();
    while(ok){
        for(int i=1;i<=n;i++){
            cout<<a[i];
        }
        cout<<endl;
        sinh();
    }
}

