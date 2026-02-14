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
    multiset<int>ml;
    for(int i=0;i<n;i++){
        int h;
        cin>>h;
        ml.insert(h);
    }

    for(int i=0;i<m;i++){
        int t;
        cin>>t;
        auto it = ml.upper_bound(t);

        if(it == ml.begin()){
            cout<< -1<<nl;
        }
        else{
            --it;
            cout << *it<<nl;
            ml.erase(it);
        }
    }

    return 0;
}