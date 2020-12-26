#include<bits/stdc++.h>
using namespace std;
int main(){
	string aa,bb;
	int t=1,tc,n,m;
	cin>>tc;
	while(tc--){
		cin>>aa>>bb;
		int ln=aa.length();
		int ln2=bb.length();
		sort(aa.begin(),aa.end());
		bool ok=false;
		for(int i=0;i<ln2-ln+1;i++){
			string temp=bb.substr(i,ln);
			sort(temp.begin(),temp.end());
			if(aa==temp){
				ok=true;
				break;
			}
		}
		if(ok) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
return 0;
}