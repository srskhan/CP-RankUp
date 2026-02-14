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
        cin>>n;
        vector<int>arr(n);
        int total_xor=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            total_xor^=arr[i];
        }

        int min_xor = total_xor;

        for(int i=0;i<n;i++){
            int tmp = arr[i]^total_xor;
            min_xor = min(min_xor,tmp);
        }

        cout<< min_xor << nl;

    }

    return 0;
}