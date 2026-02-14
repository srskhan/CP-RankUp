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
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        vector<int> arr(n+1);
        vector<int> pref_sum(n+1);
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            pref_sum[i]= pref_sum[i-1]+ arr[i];
        }

        while(q--)
        {
            int l,r,k;
            cin>>l>>r>>k;
            int ans = pref_sum[n]-(pref_sum[r]-pref_sum[l-1])+ k* (r-l+1);

            if(ans % 2 != 0) yes;
            else no;
        }
    }

    return 0;
}