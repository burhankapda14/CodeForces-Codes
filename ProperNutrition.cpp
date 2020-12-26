#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b;
    while(cin>>n){
        cin>>a>>b;
        int flag=0,cnt,num;
        for(int i=0;;i++){
            num=n-i*a;
            if(num<0) break;
            if(num%b==0){
                flag=1,cnt=i;break;
            }
        }
        if(flag==1){
            cout<<"YES"<<endl;
            cout<<cnt<<" "<<num/b<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
return 0;
}