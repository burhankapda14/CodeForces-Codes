#include<bits/stdc++.h>
using namespace std;
char a[10][10];
bool judge(char x){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(a[i][j]==x){
                if(a[i+1][j] == x && (a[i+2][j]=='.' || a[i-1][j] == '.'))
                    return true;
                if (a[i][j+1] == x && (a[i][j+2] == '.' || a[i][j-1] == '.'))
                    return true;
                if (a[i+1][j+1] == x && (a[i + 2][j+2] == '.' || a[i - 1][j-1] == '.'))
                    return true;
                if (a[i + 1][j-1] == x && (a[i + 2][j-2] == '.' || a[i - 1][j+1] == '.'))
                    return true;
                if (a[i + 2][j] == x && a[i + 1][j] == '.')
                    return true;
                if (a[i][j+2] == x && a[i][j+1] == '.')
                    return true;
                if (a[i + 2][j+2] == x && a[i + 1][j+1] == '.')
                    return true;
                if (a[i + 2][j-2] == x && a[i + 1][j-1] == '.')
                    return true;
            }
        }
    }
    return false;
}

int main(){
    //char a[10][10];
    for(int i=0;i<4;i++) cin>>a[i];

    if(judge('x')) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
return 0;
}