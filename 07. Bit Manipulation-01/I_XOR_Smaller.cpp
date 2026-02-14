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
        vector<int>arr(n);
        int x = INT_MAX;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            x = x & arr[i];
        }

        int hoite_pare = 1;
        int ans = 0;

        while(x)
        {
            if(x & 1){
                ans += hoite_pare;
            }

            hoite_pare *= 2;
            x/=2;
        }

        cout<< ans << nl;


    }

    return 0;
}