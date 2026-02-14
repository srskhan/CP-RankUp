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
    map<int,int> d;
    for(int i=1;i<=n;i++){
        int l,r;
        cin>>l>>r;
        d[l]++;
        d[r+1]--;
    }

    bool ok = true;
    ll sum = 0;
    for(auto [key,value]: d){
        sum += value;
        if(sum>2){
            ok = false;
            break;
        }
    }

    if(ok){
        yes;
    }
    else{
        no;
    }

    return 0;
}