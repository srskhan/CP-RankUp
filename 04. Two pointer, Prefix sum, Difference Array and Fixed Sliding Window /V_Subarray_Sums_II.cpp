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

    int n,exp_sum;
    cin>>n>>exp_sum;

    map<ll,ll> freq_sum;
    freq_sum[0]=1;
    ll ans = 0,sum=0;
    

    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        sum+=x;
        ans += freq_sum[sum-exp_sum];
        freq_sum[sum]++;
    }
    cout<<ans <<nl;

    return 0;
}