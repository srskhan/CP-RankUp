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
    vector<ll> arr(n+2);
    vector<ll>pref_sum(n+2);
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        pref_sum[i]= pref_sum[i-1]+ arr[i];
    }

    while(q--)
    {
        int a,b;
        cin>>a>>b;
        cout<< pref_sum[b] - pref_sum[a-1]<<nl;
    }
    return 0;
}