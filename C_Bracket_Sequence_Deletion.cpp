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
bool check(string s1)
{
    stack<char> st;
    for (l1 i = 0; i < s1.length(); i++)
    {
        if (s1[i] == '(')
            st.push(s1[i]);
        else if (st.size() == 0 && s1[i] == ')')
            return false;
        else
            st.pop();
    }
    return true;
}
void solve()
{
    l1 n;
    cin >> n;
    string s;
    cin >> s;

    l1 re = 0, re1 = n;
    for (l1 i = 0; i < n - 1; i++)
    {
        if (s[i] != s[i + 1] && s[i] == '(')
        {
            re++;
            re1 -= 2;
            i++;
        }
        else
        {
            char c = s[i];
            l1 co = i;
            i++;
            while (i < n)
            {
                if (s[i] == c)
                {
                    re++;
                    re1 -= (i - co + 1);
                    break;
                }
                i++;
            }
        }
    }
    cout << re << " " << re1 << "\n";
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