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
        l1 n, m;
        cin >> n >> m;
        l1 a[m + 1], b[m + 1], c[m + 1];
        a[0] = b[0] = c[0] = 0;
        set<l1> s1;
        for (l1 i = 1; i <= m; i++)
        {
            cin >> a[i] >> b[i] >> c[i];
            s1.insert(b[i]);
        }

        l1 x = 0;
        auto it = s1.begin();
        for (l1 i = 1; i <= m; i++)
        {
            if (*it != i)
            {
                x = i;
                break;
            }
            else
                it++;
        }
        if (x == 0)
        {
            x = n;
        }
        for (l1 i = 1; i <= n; i++)
        {
            if (i != x)
                cout << x << " " << i << "\n";
        }
    }
    return 0;
}
