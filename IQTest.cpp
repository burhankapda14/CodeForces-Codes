#include <stdio.h>
#include <string.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[5][5];
	int i, j, flag = 0;
	for(i = 0; i < 4; i++)
        scanf("%s", a[i]);
	for(i = 0; i < 3; i++){//仅需要三次，想一想为什么
        for(j = 0; j < 3; j++){
            int x = 0, y = 0;
            if(a[i][j] == '#')     x++;  else y++;
            if(a[i][j+1] == '#')   x++;  else y++;
            if(a[i+1][j] == '#')   x++;  else y++;
            if(a[i+1][j+1] == '#') x++;  else y++;
            if(x >= 3||y >= 3){
                flag = 1;
                break;
            }
        }
        if(flag)  break;
	}
    //printf("%s\n", flag ? "YES" : "NO");
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

	//cout<<flag ? "YES" : "NO";
	return 0;
}