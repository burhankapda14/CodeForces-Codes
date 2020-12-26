#include<bits/stdc++.h>
using namespace std;
string m[]={"vaporeon","jolteon","flareon","espeon","umbreon","leafeon","glaceon","sylveon"};
int len[]={8,7,7,6,7,7,7,7};
int main()
{
    int n,ans;
    char s[20];
    scanf("%d%s",&n,s);
    for(int i=0;i<8;i++)
    {
        if(len[i]==n)
        {
            int flag=0;
            for(int j=0;j<n;j++)
            {
                if(s[j]!='.'&&s[j]!=m[i][j])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                ans=i;
                break;
            }
        }
    }
    cout<<m[ans]<<endl;
    printf("\n");
	return 0;
}