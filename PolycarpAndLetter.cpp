#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ans=0;
    cin>>n;
    string s;
    cin>>s;
    set<char> cs;
    for(int i=0;i<n;i++){
        if(islower(s[i])){
            cs.insert(s[i]);
            ans=max(ans,(int)cs.size());
        }
        if(isupper(s[i])){
            cs.clear();
        }
    }
    cout<<ans<<endl;
        //cout<<cs.count(s[i]);
return 0;
}