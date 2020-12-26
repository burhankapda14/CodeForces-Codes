#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in\n");
#define NL printf("\n");

#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

#define inf 1000000000000

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    ll i,j,k;
    ll n,m,min;
    string t,s;

    cin>>n>>m;
    cin>>s>>t;

    min=inf;
    vector<ll> v;
    vector<ll> temp;

    for(i=0;i<=m-n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(s[j]!=t[i+j])
            {
                temp.push_back(j+1);
                cout<<"temp="<<temp[i]<<endl;
            }
        }

        if(min>temp.size())
        {
            min=temp.size();
            v=temp;
            cout<<"v="<<v[i];
        }

        temp.clear();
    }

    cout<<v.size()<<endl;
    for(i=0;i<v.size();i++)
        cout<<v[i]<<" ";

    return 0;
}
/*#include<iostream>
using namespace std;
int main()
{
	int n,m;
	char s[1010],t[1010];
	cin>>n>>m;
	cin>>s>>t;
	int id,min=1e5;
	for(int i=0;i<=m-n;i++)
	{
		int k=0;
		for(int j=0;j<n;j++)
		{
			if(s[j]!=t[j+i])
			k++;
		}
		if(k<min)
		{
			min=k;
			id=i;//t start position in the string 
		}
	}
	cout<<min<<endl;
	for(int i=0;i<n;i++)
	{
		if(s[i]!=t[id+i])
		cout<<i+1<<" ";
	}
	return 0;
}*/










/*#include<bits/stdc++.h>
using namespace std;
int n,m,i,j,c,a=2e9,ai;

string s,t;
int main(){
cin>>n>>m>>s>>t;
for(i=0;i<=m-n;i++)
{
for(c=j=0;j<n;j++)
t[i+j]==s[j]?0:c++;
c<a?a=c,ai=i:0;
}
cout<<a<<endl;
for(c=j=0;j<n;j++)
t[ai+j]!=s[j]?cout<<j+1<<" ",0:0;
}*/