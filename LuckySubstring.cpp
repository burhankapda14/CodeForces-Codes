#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,fr=0,svn=0,nai=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='4') fr++;
        else if(s[i]=='7') svn++;
        else nai++;
    }
    if(nai==s.size()) cout<<"-1"<<endl;
    else if(fr>=svn) cout<<"4"<<endl;
    else cout<<"7"<<endl;

return 0;
}