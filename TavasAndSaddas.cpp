#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main(){
    ll ans=0;
    string arr;
    cin>>arr;
    ll digits=arr.size();
    ans=pow(2,digits)-2;
    for(ll i=digits-1,count=0;i>=0;i--,count++){
        if(arr[i]=='7')
            ans+=pow(2,count);
    }
    cout<<ans+1<<endl;
return 0;

}