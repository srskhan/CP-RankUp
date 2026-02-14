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

// #include <bits/stdc++.h>
// using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n), b;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        b = a;
        sort(b.begin(), b.end());

        // যদি আগেই sorted থাকে
        if (a == b) {
            cout << -1 << '\n';
            continue;
        }

        long long mn = LLONG_MAX, mx = LLONG_MIN;

        // শুধু mismatched element গুলো নেব
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                mn = min(mn, a[i]);
                mx = max(mx, a[i]);
            }
        }

        cout << (mx - mn) << '\n';
    }

    return 0;
}
