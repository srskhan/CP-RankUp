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
    ll s;
    cin>>n>>s;
    vector<ll> arr(n);
    for(int i=0;i<n;i++) cin>> arr[i];

    int l=0,r=0;
    int ans = INT_MAX;
    ll sum=0;
    while(r<n){
        sum += arr[r];
        while(sum>=s){
            ans = min(ans,r-l+1);
            sum -= arr[l];
            l++;
        }
        r++;
    }
    
    if(ans == INT_MAX){
        cout<< -1 <<nl;
    }
    else{
        cout<< ans <<nl;
    }

    return 0;
}