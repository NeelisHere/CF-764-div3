#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
		int n,minVal=INT_MAX,maxVal=0; cin>>n;
		while(n--){
			int val; cin>>val;
			minVal=min(minVal,val);
			maxVal=max(maxVal,val);
		}
		cout<<maxVal-minVal<<endl;
	}
}
