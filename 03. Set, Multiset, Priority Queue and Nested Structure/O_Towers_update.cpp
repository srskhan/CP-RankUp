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

    int n;
    cin>>n;
    multiset<int>towers;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        auto it = towers.upper_bound(x);
        if(it == towers.end()){
            towers.insert(x);
        }
        else{
            towers.erase(it);
            towers.insert(x);
        }
    }
    cout<<towers.size()<<nl;

    return 0;
}