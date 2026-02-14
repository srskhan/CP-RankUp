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

    ll n,a,b,p,q;
    cin>>n>>a>>b>>p>>q;
    ll mx = max(p,q);

    ll ans = 0;
    for(ll i=1;i<=n;i++){
        if(i%a==0 && i%b==0){
            ans+= mx;
        }
        else if(i%a==0){
            ans += p;
        }
        else if(i%b==0){
            ans+= q;
        }
    }
    cout<< ans <<nl;

    return 0;
}