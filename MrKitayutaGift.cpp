#include<bits/stdc++.h>
using namespace std;
  

int check(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]!=s[s.size()-1-i])
            return 0;
    }
return 1;
}

int main(){
    string s;
    cin>>s;
    for(char c='a';c<='z';c++){
        for(int i=0;i<=s.size();i++){
            string a=s;
            string b=" ";
            b[0]=c;
            a.insert(i,b);
            if(check(a)){
                cout<<a<<endl;
                return 0;
            }
        }
    }
    cout<<"NA"<<endl;
return 0;
}