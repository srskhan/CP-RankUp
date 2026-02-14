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

    int t;
    cin>>t;
    while(t--){
        ll n,m,h;
        cin>>n>>m>>h;

        vector<ll> arr(n);

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        map<ll,ll> added;

        for(int i=0;i<m;i++){
            ll b,c;
            cin>>b>>c;
            b--;

            if(arr[b] + added[b] + c <=h){
                added[b] += c;
            }
            else{
                added.clear();
            }
        }

        for(int i=0;i<n;i++){
            cout<< arr[i]+ added[i]<<" ";
        }
        cout<< nl;
    }

    return 0;
}