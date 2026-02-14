#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <climits>
#include <numeric>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define nl '\n'
typedef long long ll;


int main()
{
    fast_io;
    int n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(n + 2), cnge(n + 2, 0), chnage_on_query(m + 2, 0);
    vector<pair<pair<ll, ll>, ll>> query(m + 2);

    for(int i = 1; i <= n; i++)
        cin >> a[i];

    for(int i = 1; i <= m; i++)
        cin >> query[i].first.first >> query[i].first.second >> query[i].second;

    while(k--)
    {
        int l, r;
        cin >> l >> r;
        chnage_on_query[l]++;
        chnage_on_query[r + 1]--;
    }

    ll c = 0;
    for(int i = 1; i <= m; i++)
    {
        c += chnage_on_query[i];
        cnge[query[i].first.first] += query[i].second * c;
        cnge[query[i].first.second + 1] -= query[i].second * c;
    }

    c = 0;
    for(int i = 1; i <= n; i++)
    {
        c += cnge[i];
        a[i] += c;
        cout << a[i] << " ";
    }

    cout << endl;



    return 0;
}