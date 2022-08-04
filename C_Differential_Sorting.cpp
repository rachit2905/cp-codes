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
    vl1 v1, v2, v3, v4;
    for0(i, n)
    {
        l1 x;
        cin >> x;
        v1.pb(x);
        if (x > 0)
            v3.pb(i + 1);
    }
    v2 = v1;
    v4 = v1;

    sort(v1.begin(), v1.end());

    if (v1 == v4)
    {
        out(0);
        return;
    }
    if (v4[n - 2] > v4[n - 1])
    {
        out(-1);
        return;
    }
    v1 = v4;
    l1 re = 0, k = 0, x = v3[v3.size() - 1];
    if (v1[n - 1] >= 0)
    {
        vector<pair<pair<l1, l1>, l1>> vp;
        for (l1 i = 0; i < n - 2; i++)
        {

            vp.pb({{i + 1, n - 1}, n});
        }

        out(vp.size());
        for0(i, vp.size())
        {
            cout << vp[i].first.first << " " << vp[i].first.second << " " << vp[i].second << "\n";
        }
    }
    else
        out(-1);
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