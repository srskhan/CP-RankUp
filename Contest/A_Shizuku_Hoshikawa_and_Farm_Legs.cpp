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

        if(n%2!=0){
            cout<< 0 <<nl;
            continue;
        }

        if(n==0){
            cout<< 0 <<nl;
            continue;
        }

        if(n==2){
            cout<< 1 <<nl;
            continue;
        }

        if(n>=4){
            int x = n /4;
            cout<< x+1 <<nl;
            continue;
        }
    }

    return 0;
}