#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a[n+2],mn=INT_MAX;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    mp[a[0]]++;
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1])
            continue;
        mp[a[i]]++;
    }
    mp[a[0]]--;
    mp[a[n-1]]--;
    for(auto x:mp){
        mn=min(x.second,mn);
    }
    cout<<mn+1<<endl;
}
return 0;

}