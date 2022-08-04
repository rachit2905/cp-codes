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
        string s1;
        cin >> s1;
        l1 z = 0;
        for (l1 i = 0; i < n; i++)
        {
            if (s1[i] == '0')
                z++;
        }
        string s2 = s1;
        reverse(s1.begin(), s1.end());
        if (s2 == s1)
        {
            if (z % 2 == 0 || z == 1)
                cout << "BOB\n";
            else
                cout << "ALICE\n";
        }
        else
        {
            if (n % 2 != 0 && s2[n / 2] == '0' && z == 2)
                cout << "DRAW\n";
            else
                cout << "ALICE\n";
        }
    }
    return 0;
}
