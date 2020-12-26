#include<bits/stdc++.h>
using namespace std;
int dec(string s){
    int len=s.length(),ans=0;
    for(int i=0;i<len;i++)
        ans+=(s[i]-'0')*(int)(pow(2,len-1-i));
    return ans;
}
int main(){
    int n,p=1;
    string i="110";
    cin>>n;
    while(dec(i)<=n){
        if(n%dec(i)==0){
            p=dec(i);
        }
    i="1"+i+"0";
    }
    cout<<p<<endl;
return 0;
}