#include<bits/stdc++.h>
using namespace std;
int main()
{
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);

        string door,rail;
        int n;
        cin>>door>>rail;
        if(door=="front" && rail=="1")
            cout<<"L"<<endl;
        else if(door=="front" && rail=="2")
            cout<<"R"<<endl;
        else if(door=="back" && rail=="1")
            cout<<"R"<<endl;
        else
            cout<<"L";
return 0;
}
        