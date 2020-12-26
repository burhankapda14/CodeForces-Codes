#include <bits/stdc++.h>
using namespace std;

#define FR(x) freopen(x, "r", stdin)
#define FW(y) freopen(y, "w", stdout)
#define FILE(in, out) \
    FR(in);           \
    FW(out)

int Log2n(unsigned int n)
{
    return (n > 1) ? 1 + Log2n(n / 2) : 0;
}

double ent(double p, double n)
{
    double t1, t2, r1, r2, l1, l2, e;
    t1 = -p / (p + n);
    t2 = n / (p + n);
    r1 = p / (p + n);
    r2 = n / (p + n);
    l1 = log2(r1);
    l2 = log2(r2);
    e = t1 * l1 - t2 * l2;
    return e;
}

void solve()
{
    double p, n;
    cin >> p >> n;
    double Ent = ent(p, n);
    cout << "daddy : " << Ent << endl;
    int z;
    cin >> z;
    double p1[z], n1[z], I[z];
    for (int i = 0; i < z; i++)
    {
        cin >> p1[i] >> n1[i];
        I[i] = ent(p1[i], n1[i]);
    }
    double a = 0;
    for (int i = 0; i < z; i++)
    {
        double r = ((p1[i] + n1[i]) * I[i]) / (p + n);
        a += r;
    }
    cout << "I : " << a << endl;
    cout << "G : " << Ent - a;
}

int main()
{
    FILE("in.txt", "out.txt");
    solve();
    return 0;
}