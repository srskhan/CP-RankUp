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

int main() {
    fast_io;

    int n,q;
    cin>>n>>q;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    vector<int> d(n+1);
    for(int i=0;i<q;i++){
        int l,r;
        cin>>l>>r;
        l--,r--;
        d[l]++;
        d[r+1]--;
    }

    for(int i=1;i<=n;i++){
        d[i] = d[i-1]+d[i];
    }

    sort(rall(arr));
    sort(rall(d));

    ll ans = 0;

    for(int i=0;i<n;i++){
        ans += (1LL * arr[i]* d[i]);
    }

    cout<< ans <<nl;
    return 0;
}