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

    int n;
    cin>>n;

    map<int,int> last_index;
    ll ans = 0;

    for(int l=1,r=1;r<=n;r++){
        int x;
        cin>>x;
        l = max(l,last_index[x]+1);
        last_index[x] = r;
        ans += (r-l+1);
    }
    cout<<ans<<nl;

    return 0;
}