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
l1 gcd(l1 a, l1 b)
{
    if (b > a)
    {
        return gcd(b, a);
    }
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
l1 expo(l1 a, l1 b, l1 mod)
{
    l1 res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b = b >> 1;
    }
    return res;
}
void extendgcd(l1 a, l1 b, l1 *v)
{
    if (b == 0)
    {
        v[0] = 1;
        v[1] = 0;
        v[2] = a;
        return;
    }
    extendgcd(b, a % b, v);
    l1 x = v[1];
    v[1] = v[0] - v[1] * (a / b);
    v[0] = x;
    return;
} // pass an arry of size1 3
l1 lcm(l1 a, l1 b) { return (a * b) / gcd(a, b); }
l1 countDivisors(l1 n)
{
    l1 cnt = 0;
    for (l1 i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                cnt++;
            else
                cnt = cnt + 2;
        }
    }
    return cnt;
}
l1 mminv(l1 a, l1 b)
{
    l1 arr[3];
    extendgcd(a, b, arr);
    return arr[0];
} // for non prime b
l1 mminvprime(l1 a, l1 b) { return expo(a, b - 2, b); }
bool revsort(l1 a, l1 b) { return a > b; }
l1 combination(l1 n, l1 r, l1 m, l1 *fact, l1 *ifact)
{
    l1 val1 = fact[n];
    l1 val2 = ifact[n - r];
    l1 val3 = ifact[r];
    return (((val1 * val2) % m) * val3) % m;
}
vector<l1> primeFactors(l1 n)
{
    vector<l1> ret;
    while (n % 2 == 0)
    {
        ret.pb(2);
        n = n / 2;
    }
    for (l1 i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            ret.pb(i);
            n = n / i;
        }
    }
    if (n > 2)
    {
        ret.pb(n);
    }
    return ret;
}
vector<l1> prime(l1 n)
{
    l1 *arr = new l1[n + 1]();
    vector<l1> vect;
    for (l1 i = 2; i <= n; i++)
        if (arr[i] == 0)
        {
            vect.push_back(i);
            for (l1 j = (l1(i) * l1(i)); j <= n; j += i)
                arr[j] = 1;
        }
    return vect;
}
vector<l1> divisor(l1 n)
{
    vector<l1> res;
    for (l1 i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                res.pb(i);
            else
            {
                res.pb(i);
                res.pb(n / i);
            }
        }
    }
    return res;
}
vector<l1> sieve(int n)
{
    int *arr = new int[n + 1]();
    vector<l1> vect;
    for (int i = 2; i <= n; i++)
        if (arr[i] == 0)
        {
            vect.push_back(i);
            for (int j = 2 * i; j <= n; j += i)
                arr[j] = 1;
        }
    return vect;
}
l1 countnumber(l1 n)
{
    l1 cnt = 0;
    while (n > 0)
    {
        cnt++;
        n /= 10;
    }
    return cnt;
}
l1 mod_add(l1 a, l1 b, l1 m)
{
    a = a % m;
    b = b % m;
    return (((a + b) % m) + m) % m;
}
l1 getupper(l1 k)
{
    l1 x = 8 * k + 1;
    l1 sqr = sqrt(x);
    if ((sqr * sqr) == x)
    {
        sqr--;
        return (sqr / 2);
    }
    sqr--;
    return (sqr / 2) + 1;
}
l1 get2upper(l1 n, l1 rem)
{
    l1 a = (2 * n) + 1;
    l1 s = ((4 * n * n) + (4 * n) + 1) - (8 * rem);
    l1 sqr = sqrt(s);
    if ((sqr * sqr) == s)
    {
        return ((a - sqr) / 2) - 1;
    }
    sqr++;
    return ((a - sqr) / 2);
}
l1 mod_mul(l1 a, l1 b, l1 m)
{
    a = a % m;
    b = b % m;
    return (((a * b) % m) + m) % m;
}
l1 mod_sub(l1 a, l1 b, l1 m)
{
    a = a % m;
    b = b % m;
    return (((a - b) % m) + m) % m;
}
l1 mod_div(l1 a, l1 b, l1 m)
{
    a = a % m;
    b = b % m;
    return (mod_mul(a, mminvprime(b, m), m) + m) % m;
} // only for prime m
l1 modPower(l1 x, l1 y)
{
    l1 res = 1;
    x = x % MOD;
    if (x == 0)
        return 0;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % MOD;
        y = y / 2;
        x = (x * x) % MOD;
    }
    return res;
}
l1 phin(l1 n)
{
    l1 number = n;
    if (n % 2 == 0)
    {
        number /= 2;
        while (n % 2 == 0)
            n /= 2;
    }
    for (l1 i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
                n /= i;
            number = (number / i * (i - 1));
        }
    }
    if (n > 1)
        number = (number / n * (n - 1));
    return number;
} // O(sqrt(N))
l1 modFact(l1 n)
{
    l1 result = 1;
    for (l1 i = 1; i <= n; i++)
        result = (result * i) % MOD;
    return result;
}
l1 power(l1 x, l1 y)
{
    l1 res = 1;
    while (y > 0)
    {
        if (y & 1)
            res = res * x;
        y = y >> 1;
        x = x * x;
    }
    return res;
}
l1 negMOD(l1 x)
{
    x = -x;
    l1 s = x / MOD;
    if (x % MOD)
        s++;
    return (MOD * s) - x;
}
l1 maxll(l1 a, l1 b)
{
    if (a > b)
        return a;
    return b;
}
l1 minll(l1 a, l1 b)
{
    if (a < b)
        return a;
    return b;
}
void precision(l1 a) { cout << setprecision(a) << fixed; }
l1 msb(l1 n)
{
    l1 res = 0;
    while (n / 2 != 0)
    {
        n /= 2;
        res++;
    }
    return res;
}

void solve()
{
    l1 n;
    cin >> n;
    vl1 v1, v2(n, 0), v3(n, 0);
    l1 sum = 0;
    for (l1 i = 0; i < n; i++)
    {
        l1 x;
        cin >> x;
        v1.pb(x);
        sum += x;
    }
    l1 sum1 = 0, sum2 = 0;
    for (l1 i = 0; i < n; i++)
    {
        if (i % 2)
        {
            v2[i] = v1[i];
            v3[i] = 1;
        }
        else
        {
            v3[i] = v1[i];
            v2[i] = 1;
        }
        sum1 += abs(v2[i] - v1[i]);
        sum2 += abs(v3[i] - v1[i]);
    }
    if (2 * sum1 <= sum)
    {
        for (l1 i = 0; i < n; i++)
            cout << v2[i] << " ";
        cout << ln;
    }
    else
    {
        for (l1 i = 0; i < n; i++)
            cout << v3[i] << " ";
        cout << ln;
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