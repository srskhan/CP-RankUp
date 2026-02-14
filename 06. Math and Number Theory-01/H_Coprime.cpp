// links:  https://codeforces.com/problemset/problem/1742/D
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
vector<int>pos(1001,-1);

int main() {
    fast_io;

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        for(int i=0;i<=1000;i++) pos[i]=-1;

        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            pos[x]=i;
        }

        int ans=-1;

        for(int x=1;x<=1000;x++){
            if(pos[x]== -1) continue;

            for(int y=1;y<=1000;y++){
                if(pos[y]==-1) continue;

                if(gcdll(x,y)==1){
                    ans = max(ans,pos[x]+pos[y]);
                }
            }
        }
        cout<< ans << nl;
    }

    return 0;
}