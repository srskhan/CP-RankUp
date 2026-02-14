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
        vector<string> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        map<string, int> mp;
        ll ans = 0;

        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }

        for (auto st : arr)
        {
            for(int i=0;i<2;i++){
                for (char c = 'a'; c <= 'k'; c++)
                {
                    if(st[i] != c){
                        string temp = st;
                        temp[i] = c;
                        if(mp.count(temp)){
                            ans+= mp[temp];
                        }
                    }
                }
            }
            // mp[st]++;
        }
        cout<< ans/2 <<nl;
    }

    return 0;
}
