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
        l1 x1, y1, z1, x2, y2, z2;
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
        l1 sum = 0, m;
        m = min(x1, z2);
        x1 -= m;
        z2 -= m;
        m = min(y1, x2);
        y1 -= m;
        x2 = -m;
        m = min(z1, y2);
        z1 -= m;
        y2 -= m;
        sum += 2 * m;
        sum -= 2 * min(y1, z2);

        cout << sum << "\n";
    }
    return 0;
}
