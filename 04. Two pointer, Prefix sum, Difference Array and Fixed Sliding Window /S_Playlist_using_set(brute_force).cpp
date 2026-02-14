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
    cin>>n;
    vector<ll> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    unordered_set<ll> st;
    int l=0,ans = 0;

    for(int r=0;r<n;r++){
        while(st.count(arr[r])){
            st.erase(arr[l]);
            l++;
        }

        st.insert(arr[r]);
        ans = max(ans, r-l+1);

    }
    cout<<ans <<nl;

    return 0;
}