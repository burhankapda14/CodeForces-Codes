#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string o[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    string d[10]={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    string t[10]={"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};

    if(n<10) cout<<o[n]<<endl;
    else if(n>=10 && n<20) cout<<d[n-10]<<endl;
    else if(n%10==0) cout<<t[n/10]<<endl;
    else cout<<t[n/10]<<"-"<<o[n%10]<<endl;

return 0;
}