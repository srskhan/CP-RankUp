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
        int n;
        cin>>n;
        vector<int> arr(n+1);
        vector<ll> pref_sum(n+1);
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            pref_sum[i]= pref_sum[i-1]+ arr[i];
        }

        string st;
        cin>>st;


        int l=0,r= n-1;
        ll sum=0;

        while(l<r)
        {
            while(l<r && st[l]!='L'){
                l++;
            }
            while(l<r && st[r]!= 'R' ){
                r--;
            }
            // if(l>=r) break;
            
            if(l<r && st[l]=='L' && st[r]== 'R'){
                sum += (pref_sum[r+1] - pref_sum[l]);
            }
            l++;
            r--;
        }
        cout<< sum << nl;
    }

    return 0;
}