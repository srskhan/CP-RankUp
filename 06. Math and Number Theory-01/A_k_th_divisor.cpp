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

    ll n,k;
    cin>>n>>k;

    vector<ll> divisors;

    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            divisors.push_back(i);
            if(n/i != i){
                divisors.push_back(n/i);
            }
        }
    }

    sort(divisors.begin(),divisors.end());

    if(k> divisors.size()){
        cout<< -1 << nl;
    }
    else{
        cout<< divisors[k-1];
    }

    return 0;
}