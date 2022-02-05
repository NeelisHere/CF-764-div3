#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
		int a,b,c; cin>>a>>b>>c;
		bool op1,op2,op3;
		op1=(2*b-a>0 and (2*b-a)%c==0);
		op2=(2*b-c>0 and (2*b-c)%a==0);
		op3=((a+c)%(2*b)==0);
		if(op1 or op2 or op3)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
