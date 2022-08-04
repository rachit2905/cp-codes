#include <bits/stdc++.h>
using namespace std;
#define l1 long long int
const l1 INF = 1e9 + 7;
int main(int argc, char const *argv[])
{
    l1 n, m, x, y;
    cin >> n >> m >> x >> y;
    cout << x << " " << y << "\n";
    cout << 1 << " " << y << "\n";
    cout << 1 << " " << 1 << "\n";
    for (l1 i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            for (l1 j = 1; j <= m; j++)
            {
                if ((i == 1 && j == 1) || (i == 1 && j == y) || (i == x && j == y))
                    continue;
                else
                    cout << i << " " << j << "\n";
            }
        }
        else
        {
            for (l1 j = m; j >= 1; j--)
            {
                if ((i == 1 && j == 1) || (i == 1 && j == y) || (i == x && j == y))
                    continue;
                else
                    cout << i << " " << j << "\n";
            }
        }
    }

    return 0;
}
