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
        l1 n;
        cin >> n;
        l1 x = 1;
        l1 n1 = n;
        vector<l1> v1;
        l1 h;
        bool co = true;
        for (l1 i = 0; i < n; i++)
        {
            l1 x;
            cin >> x;
            if (x == 1)
                v1.push_back(x);
            if (x != 1 && co)
            {
                h = i + 1;
                co = false;
            }
        }
        if (v1.size() == n)
        {
            if (n % 2 != 0)
                cout << "First\n";
            else
                cout << "Second\n";
        }
        else
        {
            if (h % 2 == 0)
                cout << "Second\n";
            else
                cout << "First\n";
        }
    }
    return 0;
}
