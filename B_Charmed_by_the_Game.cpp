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
        l1 a, b;
        cin >> a >> b;
        set<l1> s1;
        l1 p = ceil((a + b) / 2.0);
        for (l1 i = 0; i <= p; i++)
        {
            l1 y = a - p + i;
            if (y <= (a + b) / 2 && y >= 0)
                s1.insert(i + y);
        }
        for (l1 i = 0; i <= p; i++)
        {
            l1 x = b - p + i;
            if (x <= (a + b) / 2 && x >= 0)
                s1.insert(i + x);
        }
        cout << s1.size() << "\n";
        for (auto it = s1.begin(); it != s1.end(); it++)
            cout << *it << " ";
        cout << "\n";
    }
    return 0;
}
