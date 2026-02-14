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
const ll INF = 1e18;
const int MOD = 1e9 + 7;
ll fx[] = {0,0,1,-1,1,1,-1,-1};
ll fy[] = {1,-1,0,0,-1,1,-1,1};
ll gcdll(ll a, ll b) { while(b){ a %= b; swap(a,b); } return a; }
ll lcmll(ll a, ll b) { return (a / gcdll(a,b)) * b; }

// ------------------------ Main ------------------------
int main() {
    fast_io;

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];

        ll gcd1 = 0, gcd2 = 0;
        ll d=0;

        for(int i=0;i<n;i+=2){
            gcd1 = gcdll(gcd1, arr[i]);
        }
        for(int i=1;i<n;i+=2){
            gcd2 = gcdll(gcd2, arr[i]);
        }
        bool ok = true;
        for(int i=1;i<n;i+=2){
            if(arr[i] % gcd1==0){
                ok = false;
            }
        }

        if(ok){
            d = gcd1;
        }
        else{
            ok = true;
            for(int i=0;i<n;i+=2){
                if(arr[i] % gcd2==0){
                    ok = false;
                }
            }

            if(ok){
                d = gcd2;
            }
        }

        cout<< d << nl;

    }

    return 0;
}