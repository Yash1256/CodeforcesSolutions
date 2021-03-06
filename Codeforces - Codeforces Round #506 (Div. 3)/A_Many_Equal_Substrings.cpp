#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define const ll mod = 1000000007;
#define fora(ds) for (auto &i : ds) // ds = data structure
#define FOR(x) for (auto it = x.begin(); it != x.end(); ++it)
#define forn(n) for (ll i = 0; i < n; i++)
#define forkn(i, k, n) for (ll i = k; i < n; i++)
#define forin(n) for (ll i = n - 1; i >= 0; i--)
#define forkin(i, k, n) for (ll i = k; i >= n; i--)
#define coutl cout << endl;
#define couts(val) cout << val << " "
#define mpii map<int, int>
#define mpsi map<string, int>
#define mpll map<ll, ll>
#define vci vector<int>
#define vcl vector<ll>
#define vcs vector<string>
#define paii pair<int, int>
#define vp vector<paii>
#define vc(type) vector<type>
#define sz(a) int((a).size())

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, k, j, len;
    string t;
    cin >> n >> k >> t;

    vcl p(n);
    forkn(i, 1, n)
    {
        j = p[i - 1];
        while (j > 0 && t[j] != t[i])
        {
            j = p[j - 1];
            // couts(j);
        }
        if (t[i] == t[j])
            ++j;
        p[i] = j;
        // cout << j << endl;
    }

    len = sz(t) - p[n - 1];

    forn(k - 1) cout << t.substr(0, len);
    cout << t << endl;

    return 0;
}