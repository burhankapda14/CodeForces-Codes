#include<bits/stdc++.h>
using namespace std;
int main(){
    float p,n;
    cin>>p>>n;
    float res=(-p/(p+n))*log(p/(p+n)) - (-n/(p+n))*log(n/(p+n));
    cout<<res;
return 0;
}