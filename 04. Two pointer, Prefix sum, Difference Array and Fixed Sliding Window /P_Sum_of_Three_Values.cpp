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

    ll n,x;
    cin>>n>>x;
    vector<pair<ll,ll>>vec;
    for(int i=0;i<n;i++){
        int z;
        cin>>z;
        vec.push_back({z,i+1});
    }
    ll l=0,r=0;
    ll sum = 0;

    sort(all(vec));

    for(int i=0;i<n;i++){
        int l = i+1, r = n-1;
        while(l<r){
            sum = vec[i].first + vec[l].first + vec[r].first;

            if(sum == x){
                cout<< vec[i].second << " " << vec[l].second << " "<< vec[r].second<<nl;
                return 0;
            }
            else if(sum < x){
                l++;
            }
            else{
                r--;
            }
        }
    }
    cout<< "IMPOSSIBLE" <<nl;
    return 0;
}