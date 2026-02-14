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

    int n,x;
    cin>>n>>x;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    int r=0,l=0;
    int cnt =0;
    ll sum = 0;
    while(r<n){
        sum += arr[r];
        while(sum>x){
            sum -= arr[l];
            l++;
        }
        if(sum==x){
            cnt++;
        }
        r++;
    }
    cout<< cnt<<nl;

    return 0;
}