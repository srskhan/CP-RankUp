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
        int player;
        cin>>player;

        vector<pair<int,int>> vec;

        for(int i=1;i<=player;i++){
            int gcd = gcdll(i,player);
            vec.push_back({i,gcd});
        }

        multiset<pair<int,int>>ml;

        for(auto v: vec){
            int p = v.first, g = v.second;
            ml.insert({g,-p});
        }


        vector<int>ans;
        for(auto [k,v] :ml){
            ans.push_back(-v);
        }

        reverse(all(ans));
        for(int i=0;i<ans.size();i++){
            cout<< ans[i] << " ";
        }
        cout<<endl;

    }

    return 0;
}