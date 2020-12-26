#include<bits/stdc++.h>
using namespace std;
int main()
{
    int no_of_digits;
    scanf("%d", &no_of_digits);

    int no_of_5s = 0, no_of_0s = 0;
    for(int i = 1; i <= no_of_digits; i++)
    {
        int digit;
        cin>>digit;

        no_of_5s += (digit == 5);
        no_of_0s += (digit == 0);
    }

    if(no_of_0s == 0)
    {
        cout<<"-1"<<endl;
    }
    else if(no_of_5s < 9)
    {
        cout<<"0"<<endl;
    }
    else
    {
        int no_of_5s_in_number = (no_of_5s/9)*9;
        for(int i = 1; i <= no_of_5s_in_number; i++)
            cout<<"5";

        for(int i = 1; i <= no_of_0s; i++)
            cout<<"0";
    }

    return 0;
}