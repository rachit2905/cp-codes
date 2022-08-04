#include <bits/stdc++.h>
using namespace std;
#define l1 long long int
#define ull unsigned long long int
const l1 INF = 1e9 + 7;
int main(int argc, char const *argv[])
{
    l1 t;
    cin >> t;
    while (t--)
    {
        l1 n;
        cin >> n;
        vector<l1> v1;

        l1 sum = 0;
        for (l1 i = 0; i < n; i++)
        {
            l1 x;
            cin >> x;
            v1.push_back(x);
            sum += x;
        }
        if (2*sum % n != 0)
        {
            cout << 0 << "\n";
            continue;
        }
        else
        {
            l1 sum1 = 2 * sum / n;
            sort(v1.begin(), v1.end());
            map<l1, l1> cnt;
            l1 ans = 0;
            for (int i = 0; i < n; i++)
            {
                ans += cnt[sum1 - v1[i]];
                cnt[v1[i]]++;
            }
            cout << ans << "\n";
        }
    }
    return 0;
}
