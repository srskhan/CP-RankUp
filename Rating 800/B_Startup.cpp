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

const ll INF = 1e18;
const int MOD = 1e9 + 7;

ll fx[] = {0,0,1,-1,1,1,-1,-1};
ll fy[] = {1,-1,0,0,-1,1,-1,1};

ll gcdll(ll a, ll b){ return b ? gcdll(b, a % b) : a; }
ll lcmll(ll a, ll b){ return (a / gcdll(a, b)) * b; }

// ------------------------ Solve ------------------------
void solve() {
    int n,k;
    cin>>n>>k;
    vector<int> brand_cost(k,0);
    for(int i=0;i<k;i++){
        int b,c;
        cin>>b>>c;
        brand_cost[b-1]+=c;
    }
    sort(brand_cost.rbegin(),brand_cost.rend());
    ll ans = 0;
    for(int i=0;i<min(n,k);i++){
        ans += brand_cost[i];
    }
    cout<< ans << nl;
}

// ------------------------ Main ------------------------
int main() {
    fast_io;

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
