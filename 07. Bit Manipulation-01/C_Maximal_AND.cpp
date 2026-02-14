// link:  https://codeforces.com/problemset/problem/1669/H
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
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        vector<int> bits(31);
        for(int i=0;i<n;i++){
            for(int j=30;j>=0;j--){
                if((arr[i]>>j)&1){
                    bits[j]++;
                }
            }
        }

        int ans = 0;

        for(int i=30;i>=0;i--){
            if(bits[i]==n){
                ans += (1LL << i);
            }
            else{
                int need = n-bits[i];
                if(k>= need){
                    ans += (1LL << i);
                    k -= need;
                }

            }
        }

        cout<< ans << nl;

    }

    return 0;
}