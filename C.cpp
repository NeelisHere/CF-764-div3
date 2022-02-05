#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n; cin>>n;
	vector<int>a;
	set<int>s;
	while(n--){
		int val; cin>>val;
		a.push_back(val);
	}
	n=a.size();
	sort(a.begin(),a.end(),greater<int>());
	for(int val:a){
		while(val>n or s.count(val)){
			if(val==0)break;
			val/=2;
		}
		if(val==0){
			cout<<"NO"<<endl;
			return;
		}
		s.insert(val);
	}
	cout<<"YES"<<endl;
}
int main() {
	int t; cin>>t;
	while(t--){
		solve();
	}
}
