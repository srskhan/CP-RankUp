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

#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define nl '\n'
typedef long long ll;

// #include <bits/stdc++.h>
// using namespace std;

#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define nl '\n'

int main()
{
    fast_io;

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string st;
        cin >> st;

        int cnt_1 = 0;
        int ans = 0;

        for (int i = 0; i < n;)
        {
            if (st[i] == '1')
            {
                cnt_1++;
                i += 2; // next blocked
            }
            else
            {
                int j = i;
                while (j < n && st[j] == '0')
                    j++;
                int len = j - i;

                // check boundary
                if (i > 0 && st[i - 1] == '1')
                    len--;
                if (j < n && st[j] == '1')
                    len--;

                if (len > 0)
                    ans += (len + 1) / 2;

                i = j;
            }
        }

        cout << ans + cnt_1 << '\n';
    }

    return 0;
}
