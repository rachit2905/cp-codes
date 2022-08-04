#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
using namespace std;

typedef long long l1;
typedef long double ld1;
typedef pair<int, int> pi;
typedef pair<l1, l1> pl1;
typedef pair<double, double> pdd;
typedef vector<l1> vl1;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<vector<l1>> vvl1;
typedef vector<vector<pl1>> vvpl1;
typedef vector<pl1> vpl1;
typedef vector<pi> vpi;
l1 MOD = 998244353;
const l1 INF = 1e9 + 7;
double eps = 1e-12;
#define for0(i, e) for (l1 i = 0; i < e; i++)
#define forstoe(i, s, e) for (l1 i = s; i < e; i++)
#define rforn(i, s) for (l1 i = s; i >= 0; i--)
#define rforsn(i, s, e) for (l1 i = s; i >= e; i--)
#define ln "\n"
#define out(x) cout << x << ln
#define dbg(x) cout << #x << " = " << x << ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define Inf 2e18
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((l1)(x).size())
void solve()
{
    l1 n;
    cin >> n;
    vl1 v1, v2;
    l1 pr = 1;
    for (l1 i = 1; i <= 15; i++)
    {
        pr *= i;
        v1.pb(pr);
    }
    for (l1 i = 0; i <= 40; i++)
    {
        v2.pb(pow(2, i));
    }

    if (find(v1.begin(), v1.end(), n) != v1.end() || find(v2.begin(), v2.end(), n) != v2.end())
    {
        out(1);
        return;
    }
    int re = 0, x = 0;
    while (n >= 0)
    {
        if (x % 2 == 0)
        {
            for (l1 i = 0; i < v1.size(); i++)
            {
                if (n < v1[i])
                {
                    n -= v1[i - 1];
                    re++;
                    v1.erase(v1.begin() + i - 1);
                    break;
                }
            }
        }
        if (x % 2 != 0)
        {
            for (l1 i = 0; i < v2.size(); i++)
            {
                if (n < v2[i])
                {
                    n -= v2[i - 1];
                    re++;
                    v2.erase(v2.begin() + i - 1);
                    break;
                }
            }
        }
        if (find(v2.begin(), v2.end(), n) != v2.end() || find(v1.begin(), v1.end(), n) != v1.end())
        {
            re++;
            out(re);
            return;
        }
        x++;
        if (re > 55)
        {
            out(-1);
            return;
        }
    }
}
int main()
{
    fast_cin();
    l1 t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}