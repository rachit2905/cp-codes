#include <bits/stdc++.h>
using namespace std;
#define l1 long long int
#define ull unsigned long long int
const l1 INF = 1e9 + 7;
#define n (int)2e5 + 5
int a[n][30];

void cal()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            if (i & (1 << j))
            {
                a[i][j] = 1;
            }
            if (i > 1)
            {
                a[i][j] += a[i - 1][j];
            }
        }
    }
}
int main(int argc, char const *argv[])
{
    l1 t;
    cin >> t;
    cal();
    while (t--)
    {
        l1 l, r;
        cin >> l >> r;
        int ans = n + 19;
        int tot = r - l + 1;
        for (int i = 0; i < 30; i++)
        {
            ans = min(ans, tot - (a[r][i] - a[l - 1][i]));
        }
        cout << ans << endl;
    }
    return 0;
}
