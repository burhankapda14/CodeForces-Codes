#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,a,b;
    cin>>x>>y>>a>>b;
    int ans=0;
    for(int i=a;i<=x;i++){
        for(int j=b;j<=y;j++){
            if(i>j) ans++;
        }
    }
    cout<<ans<<endl;

    for (int i = a; i <= x; i++)
    {
        for (int j = b; j <= y; j++)
        {
            if (i > j)
                cout<<i<<" "<<j<<endl;
        }
    }
return 0;
}