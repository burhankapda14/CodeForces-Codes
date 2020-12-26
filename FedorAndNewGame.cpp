#include<bits/stdc++.h>
using namespace std;
int countOne(long n);
int main(){
    int n,m,k;
    long res;
    cin>>n>>m>>k;
    vector<int> a(m+1);
    for(int i=0;i<=m;i++){
        cin>>a[i];
    }
    int count=0;
    res=0;
    for(int i=0;i<m;i++){
        res=a[i]^a[m];
        if(countOne(res)<=k)
            count++;
    }
    cout<<count<<endl;
}
int countOne(long n){
    int c=0;
    while(n!=0){
        n=n&n-1;
        c++;
    }
    return c;
}