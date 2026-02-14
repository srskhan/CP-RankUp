//links: https://cses.fi/problemset/task/2162/

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
    vector<int>v;

    for(int i=1;i<=n;i++){
        v.push_back(i);
    }

    for(int i=0;i<v.size();i++){
        if(i % 2 == 0){
            v.push_back(v[i]);
        }
        else{
            cout<< v[i] << " ";
        }
    }

    return 0;
}