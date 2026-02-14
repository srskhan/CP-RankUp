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
        ll k;
        cin>>n>>k;
        vector<int> a(n+1);
        vector<int> pref(n+1);
        vector<int> h(n+1);
        pref[0]=0;
        for(int i=1;i<=n;i++){
            cin>> a[i];
            pref[i]= pref[i-1] + a[i];
        } 
        for(int i=1;i<=n;i++) cin>> h[i];
        int ans=0;
        int l=1,r=1;
        while(r<=n){
            if(h[r-1] % h[r] != 0){
                l=r;
            }
            while(pref[r]-pref[l-1]>k){
                l++;
            }
            ans = max(ans,r-l+1);
            r++;
        }

        cout<< ans << nl;

    }

    return 0;
}