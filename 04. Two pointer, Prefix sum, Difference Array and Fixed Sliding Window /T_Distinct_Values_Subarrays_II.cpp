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

    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    map<int,int> freq;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }   
    ll ans = 0;
    int cnt=0;

    for(int l=0,r=0;r<n;r++)
    {
        freq[arr[r]]++;
        if(freq[arr[r]]==1)
            cnt++;

        while(cnt>k){
            freq[arr[l]]--;
            if(freq[arr[l]]==0){
                cnt--;
            }
            l++;
        }
        ans += (r-l + 1);
    }
    cout<< ans << nl;

    return 0;
}