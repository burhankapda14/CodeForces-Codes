#include <bits/stdc++.h>
using namespace std;
int n, k;
string s;
int main(){
	//freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
	cin >> s >> k;
	n = s.size();
	int len = n/k;
	for(int i=0;i<n;i++)
		if(n % k || s[i] != s[(i/len) * len + len - 1 - (i % len)]){
			cout << "NO" << endl;
			return 0;
	}
	cout << "YES" << endl;
return 0;
}

// Remeber the formula for palindromic string i.e. : (i/len) * len + len - 1 - (i%len)