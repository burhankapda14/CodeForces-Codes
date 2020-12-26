#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ans,fo,in,al;
    string a;
    while(cin>>n){
        ans=al=fo=in=0;
        cin>>a;
        for(int i=0;i<n;i++){
            if(a[i]=='F') fo++;
            else if(a[i]=='A') al++;
            else in++;
        }
        if(al && !in) ans+=al;
        else if(in==1) ans++;

        cout<<ans<<endl;
    }
    
return 0;
}