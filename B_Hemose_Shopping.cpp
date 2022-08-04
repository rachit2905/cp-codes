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
        l1 n, x;
        cin >> n >> x;
        vector<l1> v1, v2;
        v1.push_back(0);
        for (l1 i = 0; i < n; i++)
        {
            l1 x1;
            cin >> x1;
            v1.push_back(x1);
        }
        v2 = v1;
        sort(v1.begin(), v1.end());
        if (n >= 2 * x)
        {
            cout << "YES\n";
        }
        else
        {
            bool co = true;
            for (l1 i = n - x + 1; i <= x; i++)
            {
                if (v2[i] != v1[i])
                {
                    co = false;
                    break;
                }
            }
            if (co)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}
