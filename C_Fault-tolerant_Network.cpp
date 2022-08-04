
#include<bits/stdc++.h>
typedef long long ll; 
#define rep(i,n) for (ll i = 0; i < n; i++)
#define loop(i,a,b) for (int i = a; i <= b; i++)
#define repd(i,n) for (ll i = n-1; i >= 0; i--)
#define loopr(i,a,b) for (int i = a; i >= b; i--) 
#define all(v) v.begin(),v.end()
using namespace std;
//typedefs
typedef map<ll,ll> mii;
typedef unordered_map<ll,ll> umii;
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef pair<ll,ll> pii;
typedef vector<pii> vpii;
void fastio(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void solve(){
    ll n;
    cin>>n;
    vi r1(n) ,r2(n);
    rep(i,n){
        cin>>r1[i];
    }
    rep(i,n){
        cin>>r2[i];
    }
    ll s1=INT_MAX ,s2=INT_MAX ,s3=INT_MAX,s4=INT_MAX ;

    rep(i,n) {
        s1 = min(s1, abs(r1[i] - r2[0]));
        s2 = min(s2, abs(r1[i]- r2[n-1]));
    }
    rep(i,n) {
        s3 = min(s3, abs(r2[i] - r1[0]));
        s4 = min(s4, abs(r2[i]- r1[n-1]));
    } 

    ll ans = s1 + s2 + s3 + s4;

    ans = min(ans, abs(r1[0] - r2[0]) + abs(r2[n-1] - r1[n - 1]));
    ans = min(ans, abs(r1[n-1] - r2[0]) + abs(r2[n - 1] - r1[0]));
    ans = min(ans, abs(r1[0] - r2[0]) + s2 + s4);
    ans = min(ans, abs(r1[n-1] - r2[0]) + s2 + s3);
    ans = min(ans, abs(r1[0] - r2[n-1]) + s1 + s4);
    ans = min(ans, abs(r1[n-1] - r2[n-1]) + s1 + s3);

    cout << ans << endl;
}
int main()
{
    fastio();
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}