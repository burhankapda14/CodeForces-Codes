#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
   int t;
    cin>>t;
    while(t--){
        long long total=0;
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        vector<string> s(n);
        for(int i=0;i<n;i++)
            cin>>s[i];
            
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(s[i][j]=='.' && j+1<m && s[i][j+1]=='.'){
                    total+=(long long)min(2*x,y);
                    j++;
                }
                else if(s[i][j]=='.')
                    total+=(long long)(x);
            }
            
        }
        cout<<total<<endl;
    }
    return 0;
}