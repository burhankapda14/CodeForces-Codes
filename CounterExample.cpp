#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    freopen("CounterExample.txt","r",stdin);
    freopen("CounterExapleOutput.txt","w",stdout);

    ll l,r;
    int t;
    cin>>t;
    while(t--){
        cin>>l>>r;
        if(r==l+1 || r==l)
            cout<<"-1"<<endl;
        else if(l%2 == 0)
            cout<<l<<" "<<l+1<<" "<<l+2<<endl;
        else if(r-l+1 > 3)
            cout<<l+1<<" "<<l+2<<" "<<l+3<<endl;
        else
            cout<<"-1"<<endl;

    }
    

return 0;
    
}