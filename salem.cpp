#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define mx 10000007
#define mod 1000000007
#define PI acos(-1.0)


int dr[] = {-2,-2,-1,-1,1,1,2,2};
int dc[] = {-1,1,-2,2,-2,2,-1,1};

int main()
{
    ll tc, t = 0;

    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);

    ll num;
    sc1(num);

    ll arr[num];
    for(ll i = 0; i < num; i++){
        sc1(arr[i]);
    }

    ll cost = 1e9;

    for(ll i = 1; i < 101; i++){
        ll now = 0, yes = 0;

        for(ll j = 0; j < num; j++){
            now += max(yes, abs(arr[j] - i) - 1);
            //cout<<"yes: "<<yes<<endl;
            //cout<<"now :"<<now<<endl;
        }
        if(now < cost){
            cost = now;
            t = i;
        }
    }

    pf2(t, cost);

}