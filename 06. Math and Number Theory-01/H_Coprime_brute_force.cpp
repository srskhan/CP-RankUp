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
    while(t--)
    {
        int n;
        cin>>n;

        vector<int>arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        int mx = -1;
        
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(gcdll(arr[i],arr[j])==1){
                    mx = max(mx,i+j+2);
                }
            }
        }
        
        cout<< mx << nl;
    }

    return 0;
}