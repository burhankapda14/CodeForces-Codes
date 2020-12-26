#include<bits/stdc++.h>
using namespace std;
//doubts in this question didnt understand well
int main(){
    int n,l,d,u,r,ans;
    string str;
    while(cin>>n){
        cin>>str;
        ans=0;
        for(int i=0;i<n;i++){
            u=0,l=0,r=0,d=0;
            for(int j=i;j<n;j++){
                if(str[j]=='U')
                    u++;
                if(str[j]=='D')
                    d++;
                if(str[j]=='L')
                    l++;
                if(str[j]=='R')
                    r++;
                if(u==d && r==l)
                    ans++;
            }
        }
        cout<<ans<<endl;
    }
return 0;
}