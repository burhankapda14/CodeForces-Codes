#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <limits.h>
#include <map>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <string>
#include <time.h>
#define ll long long
#define ull unsigned long long
#define ms(a,b) memset(a,b,sizeof(a))
#define pi acos(-1.0)
#define INF 0x7f7f7f7f
#define lson o<<1
#define rson o<<1|1
#define bug cout<<"-------------"<<endl
#define debug(...) cerr<<"["<<#__VA_ARGS__":"<<(__VA_ARGS__)<<"]"<<"\n"
const double E=exp(1);
const int maxn=1e6+10;
const int mod=1e9+7;
using namespace std;
char ch[maxn];
int a[maxn];
bool cmp(int a,int b)
{
	return a>b;
}
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	int n,k;
	cin>>n>>k;
	cin>>ch;
	int res=1;
	for(int i=0;i<n;i++)
	{
		if(k==1)
			a[ch[i]-'a']++;
		else
		{
			if(ch[i]==ch[i+1])
				res++;
			else
				res=1;
			if(res==k)
			{
				a[ch[i]-'a']++;
                // cout<<"a="<<a[i]<<endl;
				res=1;
				i+=1;
			}
		}
	}
	sort(a,a+26,cmp);
	cout<<a[0]<<endl;
	return 0;
}


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     char ch[100];
//     cin>>ch;
//     cout<<ch[0]-'a'<<endl;
// return 0;
// }