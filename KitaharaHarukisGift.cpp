#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int hun=0,two=0,w;
    for(int i=1;i<=n;i++){
        cin>>w;
        hun+=(w==100);
        two+=(w==200);
    }
    two=(two%2);
    hun=hun-2*two;
    printf(hun%2 == 0 && hun >= 0 ? "YES\n" : "NO\n"); //check if remaining 100s can be divided in half.
    return 0;
}