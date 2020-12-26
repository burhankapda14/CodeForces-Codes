#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        int num=1,ans=1;
        for(int i=1;;i++){
            num=pow(2.0,i)*(pow(2.0,i+1)-1);
            if(num<=n && n%num==0)
                ans=num;
            else if(num>n)
                break;
        }
        cout<<ans<<endl;
    }
return 0;
}