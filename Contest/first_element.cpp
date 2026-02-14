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

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<pair<ll,int>> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i].first;
            arr[i].second = i;
        }

        sort(all(arr));
        vector<ll> ans(n);
        ans[arr[0].second] = -1;
        for (int i = 1; i < n-1; i++) {
            ll left = (arr[i-1].first + arr[i].first)/2 + 1;
            ll right = (arr[i].first + arr[i+1].first)/2;
            ans[arr[i].second] = max(0LL, right-left+1);
    
        }
        ans[arr[n-1].second] = -1;

        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout<< nl;
    }
    return 0;
}
