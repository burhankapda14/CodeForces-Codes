#include "iostream"
#include "algorithm"
using namespace std;
typedef long long ll;
int a[20], tmp[20];
int main()
{
    ll ans = 0, Max;
    for (int i = 1; i <= 14; i++)
        cin >> a[i];
    for (int i = 1; i <= 14; i++)
    {
        for (int j = 1; j <= 14; j++)
            tmp[j] = a[j];
        Max = 0;
        int x = tmp[i], y = i + 1;
        tmp[i] = 0;
        int n = x / 14;
        for (int i = 1; i <= 14; i++)
            tmp[i] += n;
        x %= 14;
        while (x)
        {
            y %= 14;
            if (y == 0)
                y = 14;
            tmp[y++]++;
            x--;
        }
        for (int j = 1; j <= 14; j++)
        {
            if (tmp[j] && tmp[j] % 2 == 0)
                Max += tmp[j];
        }
        ans = max(ans, Max);
    }
    cout << ans << endl;
}