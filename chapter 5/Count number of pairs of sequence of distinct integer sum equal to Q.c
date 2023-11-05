#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,m;cin>>n>>m;
	long long a[n];
	for(long long &x:a) cin>>x;
	int cnt=0;
	int i=0,j=n-1;
	sort(a,a+n);
	while(i<j){
		if(a[i]+a[j]==m){
			cnt++;
			++i;--j;
		}else if(a[i]+a[j]<m){
			++i;
		}else{
			--j;
		}
	}
	cout<<cnt<<endl;
}

