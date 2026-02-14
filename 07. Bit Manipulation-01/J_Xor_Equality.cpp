// Link: https://www.codechef.com/problems/XOREQUAL
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
const int MOD = 1e9 + 7;

ll power(ll base,ll exp)
{
    ll res = 1;
    while(exp>0){
        if(exp & 1)
            res = (res * base) % MOD;

        base = (base * base) % MOD;
        exp>>=1;
    }
    return res;
}
int main() {
    fast_io;

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<< power(2,n-1)  << nl;

    }

    return 0;
}