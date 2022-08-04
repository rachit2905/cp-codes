#include <bits/stdc++.h>
using namespace std;
#define int long long
void dfs(int node, vector<int> &c, vector<vector<int>> &adj, int &ans, int parent, int consecutive_cats, int m, int max_consecutive_cats)
{

    if (c[node])
        consecutive_cats += 1;
    else
        consecutive_cats = 0;
    max_consecutive_cats = max(max_consecutive_cats, consecutive_cats);
    if (adj[node].size() == 1 && node != 1)
    {
        if (max_consecutive_cats <= m)
            ans++;
        return;
    }
    for (auto child : adj[node])
    {
        if (child != parent)
            dfs(child, c, adj, ans, node, consecutive_cats, m, max_consecutive_cats);
    }
}
int32_t main()
{
    int n, m;
    cin >> n >> m;
    vector<int> c(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> c[i];
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int ans = 0;
    dfs(1, c, adj, ans, -1, 0, m, 0);
    cout << ans << endl;
    return 0;
}