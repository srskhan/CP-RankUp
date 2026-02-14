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

    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    vector<int> b(m);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];

    int l=0,r=0;
    vector<ll> merge_arr;
    while(l<n && r <m)
    {
        if(a[l]<b[r]){
            merge_arr.push_back(a[l]);
            l++;
        }
        else{
            merge_arr.push_back(b[r]);
            r++;
        }
        
    }

    while(l<n){
        merge_arr.push_back(a[l]);
        l++;
    }

    while(r<m){
        merge_arr.push_back(b[r]);
        r++;
    }
    
    for(int a: merge_arr){
        cout<< a << " ";
    }
    cout<<nl;

    return 0;
}