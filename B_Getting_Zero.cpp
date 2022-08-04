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
l1 check(l1 n)
{
    l1 re = 0;
    while (n)
    {
        re++;
        n = (n * 2) % 32768;
    }
    return re;
}
void solve()
{
    l1 n;
    cin >> n;
    vl1 v1, v2;
    for (l1 i = 0; i < n; i++)
    {
        l1 x;
        cin >> x;
        v1.pb(x);
    }
    for (l1 i = 0; i < n; i++)
    {
        if (v1[i] == 0)
            v2.pb(0);
        else if (32768 - v1[i] == 0)
            v2.pb(1);
        else if (32768 - v1[i] <= 15)
            v2.pb(32768 - v1[i]);
        else
        {
            l1 re1 = INT_MAX;
            for (l1 j = 0; j <= 15; j++)
            {
                re1 = min(re1, j + check(v1[i] + j));
            }
            v2.pb(re1);
        }
    }
    for (l1 i = 0; i < n; i++)
        cout << v2[i] << " ";
    cout << ln;
}
int main()
{
    fast_cin();
    l1 t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
