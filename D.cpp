#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n,k; cin>>n>>k;
	string s; cin>>s;
	vector<int>t(26,0);
	for(char c:s)t[c-'a']++;
	int countPairs=0,countOdds=0;
	for(int val:t)countPairs+=val/2,countOdds+=val%2;
	int ans=(countPairs/k)*2;
	countOdds+=(countPairs%k)*2;
	if(countOdds>=k)ans++;
	cout<<ans<<endl;
}
int main() {
	int t; cin>>t;
	while(t--){
		solve();
	}
}
