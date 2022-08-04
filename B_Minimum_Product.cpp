#include <bits/stdc++.h>
using namespace std;
#define l1 long long int
const l1 INF = 1e9 + 7;
int main(int argc, char const *argv[])
{
    l1 t;
    cin >> t;
    while (t--)
    {
        l1 a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;
        l1 x1 = 1, x2 = 1;
        l1 c = a, d = b, n1 = n, d1 = b, c1 = a;
        if (c - n >= x)
            c = c - n;
        else
        {
            c = x;
            n = n - (a - x);
            d = d - min(n, d1 - y);
        }
        x1 = c * d;
        n = n1;
        if (b - n >= y)
        {
            b = b - n;
        }
        else
        {
            b = y;
            n = n - (d1 - y);
            a = a - min(n, c1 - x);
        }
        x2 = a * b;
        cout << min(x1, x2) << "\n";
    }

    return 0;
}
