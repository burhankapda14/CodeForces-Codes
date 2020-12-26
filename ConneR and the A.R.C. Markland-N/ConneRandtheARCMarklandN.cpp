#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
int t;
cin>>t;
int n,s,k;
while(t--){
    map<int,int>m;
    cin>>n>>s>>k;
    int u;
    for(int i=0;i<k;i++)
    {
        cin>>u;
        m[u]=1;
        
    }
    
    if(m[s]==0) cout<<0<<endl;
    else{
           int ans=1e9;
           for(int i=s;i<=n;i++){ 
           if(m[i]==0) {ans=min(ans,i-s);break;}}
           for(int i=s;i>0;i--){
           if(m[i]==0) {ans=min(ans,s-i);break;}}
           cout<<ans<<endl;
        }
        m.clear();
    }
    return 0;
}