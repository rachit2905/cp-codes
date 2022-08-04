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
    vector<l1> v1, v2;
    for (l1 i = 0; i < 2 * n; i++)
    {
        l1 x;
        cin >> x;
        if (x % 2 == 0)
            v1.push_back(i + 1);
        else
            v2.push_back(i + 1);
    }
    if (v1.size() % 2 != 0 || v2.size() % 2 != 0)
    {
        v1.pop_back();
        v2.pop_back();
    }
    else
    {
        if (v1.size() != 0)
        {
            v1.pop_back();
            v1.pop_back();
        }
        else
        {
            v2.pop_back();
            v2.pop_back();
        }
    }
    for (l1 i = 0; i < v1.size(); i += 2)
    {
        cout << v1[i] << " " << v1[i + 1] << "\n";
    }
    for (l1 i = 0; i < v2.size(); i += 2)
        cout << v2[i] << " " << v2[i + 1] << "\n";
}
return 0;
}
