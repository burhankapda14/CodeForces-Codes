#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count;
    map<int,int> a;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];

    if(a[0]==0) count=0;
    else count=n-a[0];
    a[0]=0;

    for(int i=1;i<n;i++){
        if(i%2==1){
            if(a[i]-count >= 0) a[i]-=count;
            else a[i]=a[i]+n-count;
        }
        else{
            if(a[i]+count <= n-1) a[i]+=count;
            else a[i]=a[i]+count-n;
        }
    }
    for(int i=0;i<n;i++)
    if(a[i]!=i){
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
return 0;
}