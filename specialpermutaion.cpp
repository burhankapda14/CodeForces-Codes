#include <bits/stdc++.h>

using namespace std;

int main() {
/*#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif*/
	
	int t;
	cin >> t;
	/*while (t--) {
		int n;
		cin >> n;
		for (int i = 0; i < n; ++i) {
			cout << (i + 1) % n + 1 << " ";
		}
		cout << endl;
	}*/
	while(t--){
		int n;
		cin>>n;
		for(int i=2;i<=n;i++){
			cout<<i<<" ";
		}
		cout<<"1\n";
	}
	
	return 0;
}