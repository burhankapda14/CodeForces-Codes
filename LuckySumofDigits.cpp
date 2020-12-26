/*#include<bits/stdc++.h>
using namespace std;
int main(){
    bool flag = false;
    int n;
    cin>>n;
    int a,b;
    b=int(n/7);
    //cout<<b;
    //printf("%d", (int)3.14159265358979636);
    if(n<4){
        cout<<"-1"<<endl;
        return 0;
    }
    int j=n-(b*7);
    int res1=n-b*7;
    //int a=res%4;
    for(int v=b;v>=0;v--){
        if(res1%4==0){
        flag=true;
        for(int q=0;q<j/4;q++) cout<<"4";
        for(int r=0;r<b;r++) cout<<"7"<<endl;
        break;
    }
    }
    
    
    if(!flag) cout<<-1;
}*/
#include <iostream>
#include <stdio.h>
using namespace std;

int main(){

bool flag = false;
 int n;
 cin>>n;
 if(n<4){
 cout<<"-1";
 return 0;
 }
 for (int i = n / 7; i>= 0; i --) {
 int j = n - (i * 7);
 if (j% 4 == 0) {
 flag = true;
 for (int P = 0; P <j / 4; P ++) cout<<4;
 for (int Q = 0; Q <i; Q ++) cout<<7<<endl;
 break;

}

}
 if(!flag) cout<<-1<<endl;

}