#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    int mx=INT_MAX;
    for(int i=1;i<101;i++){
        int cnt=0;
        int j=0;
        while(j<n){
            while(arr[j] == i && j<n) j++;
            if(j>=n) break;
            j+=k;
            cnt++;
        }
        mx=min(mx,cnt);
    }
    cout<<mx<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}