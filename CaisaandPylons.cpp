#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ans=0,p=0;
    cin>>n;
    int a[n+10]={0};
    int i;
        for(i=1;i<=n;i++){
            cin>>a[i];
            //a.push(i);
            p+=a[i-1]-a[i];
            cout<<"p="<<p<<endl;
            if(p<0){
            ans+=abs(p);
            p=0;
            cout<<"ans="<<ans<<endl;
        }
        cout<<ans<<endl;

    }
    
    //cout<<ans<<endl;
return 0;
}