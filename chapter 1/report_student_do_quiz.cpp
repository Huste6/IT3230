#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	map<string,int> mp;
	while(getline(cin,s)){
		if(s=="*") break;
		string date,time,user_id,question_id;
		stringstream ss(s);
		ss>>date>>time>>user_id>>question_id;
		date=date.substr(0,10);
		mp[date]++;
	}
	for(auto it:mp){
		cout<<it.first<<" "<<it.second;
		cout<<endl;
	}
}
