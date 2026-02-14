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
        int n,s;
        cin>>n>>s;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
    
        int l=0,r=0;
        int mx = INT_MIN;
        ll sum = 0;
        while(r<n){
            sum += arr[r];
            if(sum == s){
                mx = max(mx, r-l+1);
            }
            else{
                while(sum>s && l<=r){
                    sum -= arr[l];
                    l++;
                }
                if(sum == s){
                    mx = max(mx, r-l+1);
                }
            }
            r++;
        }

        if(mx == INT_MIN){
            cout<< -1 <<nl;
        }
        else{
            cout<< n-mx <<nl;
        }
    }

    return 0;
}