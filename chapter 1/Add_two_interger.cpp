#include<bits/stdc++.h>
using namespace std;
string add1(string a,string b){
    int n=a.size()-1,m=b.size()-1;
    while(n<m){
        a='0'+a;
        n++;
    }
    while(n>m){
        b='0'+b;
        m++;
    }
    string ans="";
    int nums=0;
    for(int i=a.size()-1;i>=0;i--){
        nums=nums+(a[i]-'0')+(b[i]-'0');
        ans+=nums%10+'0';
        nums/=10;
    }
    if(nums!=0){
        ans+=nums+'0';
        nums=0;
    }
    int i=0,j=ans.size()-1;
    while(i<j){
        swap(ans[i],ans[j]);++i;--j;
    }
    return ans;
}
int main(){
    string a,b;
    cin>>a>>b;
    cout<<add1(a,b);
    return 0;
}
