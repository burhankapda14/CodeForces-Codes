#include <bits/stdc++.h>

#define forn(i, n) for (int i = 0; i < int(n); i++)

using namespace std;

string p, h;

/*bool read(){
	if (!(cin >> p >> h))
		return false;
	return true;
}*/

void solve(){
	cin>>p>>h;
	int n = h.size();
	vector<int> cntp(26);
	forn(i, p.size())
		++cntp[p[i] - 'a'];
	forn(i, n){
		vector<int> cnth(26);
		for (int j = i; j < n; ++j){
			++cnth[h[j] - 'a'];
			if (cntp == cnth){
				cout<<"YES";
				return;
			}
		}
	}
	cout<<"NO";
}

int main() {
	int tc;
	cin>>tc;
	while(tc--){
		//read();
		solve();
	}
	return 0;
}