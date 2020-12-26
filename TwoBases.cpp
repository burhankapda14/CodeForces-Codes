#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,m1,n2,m2,sum1=0,sum2=0,x,y;
    cin >> n1 >> m1;
    for (int i = 0; i < n1; i++)
    {
        cin >> x;
        sum1 = sum1 * m1 + x;
    }
    cin >> n2 >> m2;
    for (int i = 0; i < n2; i++)
    {
        cin >> x;
        sum2 = sum2 * m2 + x;
    }

    if (sum1 > sum2)
        cout << ">" << endl;
    else if(sum1 < sum2)
        cout<<"<"<<endl;
    else 
        cout<<"="<<endl;
return 0;
}
