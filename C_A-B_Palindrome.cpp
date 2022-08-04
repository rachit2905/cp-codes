#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define FAST ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define mpp make_pair
#define pb push_back
#define pi pair<int, int>
#define pll pair<ll, ll>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define fr(i, a, b) for (ll i = a; i < (int)b; i++)
#define rfr(i, a, b) for (ll i = a; i > (int)b; i--)
#define F first
#define S second
#define all(x) (x).begin(), (x).end()
#define MOD 998244353
#define endl '\n'
ll lcm(ll a, ll b)
{
    return a * (b / __gcd(a, b));
}
const ll N = 1e5 + 5;
const ll inf = 2e15;
const ll mod = 1e9 + 7;
const double eps = 1e-6;

void solve()
{
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    int n = s.size();
    int nones = 0, nzeroes = 0;
    fr(i, 0, n / 2)
    {
        if (s[i] == '1')
        {
            if (s[n - i - 1] == '0')
            {
                cout << -1 << endl;
                return;
            }
            if (s[n - i - 1] == '?')
            {
                s[n - i - 1] = '1';
            }
        }
        else if (s[i] == '0')
        {
            if (s[n - i - 1] == '1')
            {
                cout << -1 << endl;
                return;
            }
            if (s[n - i - 1] == '?')
            {
                s[n - i - 1] = '0';
            }
        }
        else
        {
            if (s[n - i - 1] == '1')
                s[i] = '1';
            else if (s[n - i - 1] == '0')
                s[i] = '0';
        }
    }
    fr(i, 0, n)
    {
        if (n % 2)
            if (i == n / 2)
                continue;
        if (s[i] == '1')
            nones++;
        if (s[i] == '0')
            nzeroes++;
    }
    if (n % 2)
    {
        if (s[n / 2] == '1')
            b--;
        else if (s[n / 2] == '0')
            a--;
        else
        {
            if (a % 2)
                s[n / 2] = '0', a--;
            else
                s[n / 2] = '1', b--;
        }
    }
    if (a % 2 || b % 2)
    {
        cout << -1 << endl;
        return;
    }
    if (nones > b || nzeroes > a)
    {
        cout << -1 << endl;
        return;
    }

    b -= nones;
    a -= nzeroes;
    fr(i, 0, n / 2)
    {
        if (s[i] == '?')
        {
            if (s[n - i - 1] == '?')
            {
                if (a >= 2)
                {
                    s[i] = s[n - i - 1] = '0';
                    a -= 2;
                }
                else
                {
                    s[i] = s[n - i - 1] = '1';
                    b -= 2;
                }
            }
        }
    }

    // cout<<a<<" "<<b<<endl;

    cout << s << endl;
}

int main()
{
    // ios_base::sync_with_stdio(0); cin.tie(0);
    int tt = 1;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}
