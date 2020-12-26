#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,s,t;
    t=0;
    scanf("%d:%d",&m,&s);
    while(m/10+m%10*10!=s){
        s++,t++;
    if(s>59) m++,s=0;
    if(m>23) m=0;
    }
    cout<<t<<endl;
}