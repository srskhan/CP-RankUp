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

int main()
{
    fast_io;

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int m;
        cin >> m;
        while (m--)
        {
            string st;
            cin >> st;
            map<int, char> num_to_char;
            map<char, int> char_to_num;

            if (st.size() != n)
            {
                no;
                continue;
            }
            for (int i = 0; i < n; i++)
            {
                num_to_char[arr[i]] = st[i];
                char_to_num[st[i]] = arr[i];
            }
            bool ok = true;

            for (int i = 0; i < n; i++)
            {
                int num = arr[i];
                char c = st[i];

                if (num_to_char[num] != c)
                {
                    ok = false;
                    break;
                }

                if (char_to_num[c] != num)
                {
                    ok = false;
                    break;
                }
            }

            if (ok)
            {
                yes;
            }
            else
            {
                no;
            }
        }
    }

    return 0;
}