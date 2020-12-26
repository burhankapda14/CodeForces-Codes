#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ar[1009];
    long long i,j,n,t,a,mx;
    while(cin>>t)
    {
        for(i=1;i<=t;i++)
        {
            cin>>n;
            cin>>ar+1;
            mx=-1;
            for(j=1;j<=n;j++)
            {

                if(ar[j]=='1')
                {
                    a=max(j-1,n-j)+1;
                    //cout<<"a="<<a<<endl;
                    if(mx<a)
                    mx=a;
                }
            }
            if(mx>=0)
            cout<<mx*2<<endl;
            else
            cout<<n<<endl;
        }
    }
    return 0;
}