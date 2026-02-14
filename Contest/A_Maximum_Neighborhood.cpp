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
        if(n==1){
            cout<<1<<nl;
        }
        else if(n==2){
            cout<< 9 <<nl;
        }
        else if(n==3){
            cout<< 29 <<nl;
        }
        else{
            cout<< 4LL*(n*n) - 4LL * n + 8 <<nl;
            // if(n%2==0){
            //     cout<< 4LL*(n*n) - 4LL * n + 8 <<nl;
            // }
            // else{
            //     cout<< 4LL*(n*n) - 4LL * n + 5 <<nl;
            // }
        }
    }

    return 0;
}