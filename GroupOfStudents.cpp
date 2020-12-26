#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int grp1,grp2,x,y;
    map<int,int> a;
    while(cin>>n){
        int sum=0,ans=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        cin>>x>>y;
        grp1=0;
        grp2=sum;
        for(int i=1;i<=n;i++){
            grp1+=a[i];
            grp2-=a[i];

            if((grp1>=x && grp1<=y) && (grp2>=x && grp2<=y)){
                ans=i+1;
                break;
            }
        }
        cout<<ans<<endl;


    }
return 0;
}