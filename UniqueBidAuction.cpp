#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n;
        int ans=-1;
        int mi=INT_MAX;
        unordered_map<int,int> mp,pos;
        for(int i=0;i<n;i++){
            cin>>x;
            pos[x]=i+1;
            mp[x]++;
        }
        for(auto it:mp){
            if(it.second==1 && mi>it.first){
                mi=it.first;
                ans=pos[it.first];
            }
        }
        cout<<ans<<endl;
    }
}