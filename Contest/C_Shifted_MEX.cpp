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
        int n;
        cin>>n;

        vector<ll> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        sort(arr.begin(),arr.end());

        vector<ll> v;
        v.push_back(arr[0]);
        for(int i=1;i<n;i++){
            if(arr[i] != arr[i-1]){
                v.push_back(arr[i]);
            }
        }

        ll best = 1;
        ll curr = 1;

        for(int i=1;i< v.size();i++){
            if(v[i]== v[i-1]+1){
                curr++;
            }
            else{
                curr = 1;
            }
            best = max(best,curr);
        }

        cout<< best << nl;

    }

    return 0;
}