#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        vector<int> a(n);
        int ans=0;
        int Min=INT_MAX;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        for(int i=1;i<=n;i++){
            ans=0;
            for(int j=1;j<=n;j++){
                ans+=(abs(j-i)+abs(j-1)+abs(i-1))*a[j]*2;
            }
            Min=min(ans,Min);
        }
        cout<<Min<<endl;
    }
return 0;
}