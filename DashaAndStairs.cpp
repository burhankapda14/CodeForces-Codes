#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int res=abs(a-b);
    if(res>1)
        cout<<"NO"<<endl;
    else if(a==0 && b==0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
return 0;
    
}