// The main idea of ​​the topic : Give you two sets of prime numbers with a maximum of 
// 2000 elements, and ask to determine whether any pair of(ai, bi) XOR is in the original set

//  Violent idea : create a set when inputting,
//                 then enumerate all possible(ai, bi) and search in the set,
//                 add one to the answer,
//                 O(n²log2n)

#include <cstdio>
#include <cmath>
#include <set>
using namespace std;
const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;

int x[MAXN], y[MAXN];

int main()
{
    int n;
    scanf("%d", &n);
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
        s.insert(x[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &y[i]);
        s.insert(y[i]);
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int value = x[i] ^ y[j];
            set<int>::iterator it = s.find(value);
            if (it != s.end())
            {
                ans++;
            }
        }
    }
    printf("%s\n", (ans & 1 ? "Koyomi" : "Karen"));
    return 0;
}

// What’s more magical is : only Karen can win, because the exclusive OR operation is really magical, if a ^ b = c, then b ^ c = a, a ^ c = b, 
// (here suppose a is set in x and b is set in y) So if c exists in a given set, it can only be in one of the two sets x and y.If it is in x, 
// then a pair of b ^ c = a can be obtained.If it is in y, the same is true.So the number of results is always an even number

// int main(){
//     cout<<"Karen\n";
// return 0;
// }
#include <bits/stdc++.h>
using namespace std;
#define Maxn 4000007
bool vis[Maxn];
int a[4007], b[4007], n;
int main()
{
    scanf("%d", &n);
    memset(vis, false, sizeof(vis));
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        vis[a[i]] = true;
    }
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &b[i]);
        vis[b[i]] = true;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (vis[a[i] ^ b[j]])
                ++ans;
    if (ans % 2 == 0)
        printf("Karen\n");
    else
        printf("Koyomi\n");
    return 0;
}
