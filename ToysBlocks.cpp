#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        ll n,x;
        ll sum=0;
        vector<ll> v;
        cin>>n;
        for(ll i=0;i<n;i++){
            cin>>x;
            v.push_back(x);
            sum+=x;
        }
        ll c1=ceil((sum*1.0)/(n-1));
        ll s=c1*(n-1);
        sort(v.begin(),v.end());
        if(v[n-1]>c1)
            s=v[n-1]*(n-1);
        cout<<s-sum<<endl;
    }
    return 0;
}