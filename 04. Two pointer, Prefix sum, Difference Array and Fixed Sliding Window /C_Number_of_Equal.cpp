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

    int n,m;
    cin>>n>>m;

    vector<int> a(n),b(m);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }

    int l=0,r=0;
    ll ans = 0;
    while(l<n && r<m){
        int curr = a[l], cnt1=0,cnt2=0;
        while(l<n && a[l]==curr){
            l++;
            cnt1++;
        }
        while(r<m && curr>b[r]){
            r++;
        }
        while(r<m && b[r] == curr){
            r++;
            cnt2++;
        }
        ans += (1LL * cnt1 * cnt2);
    }
    cout<< ans << nl;

    return 0;
}