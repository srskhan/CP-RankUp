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

// int bfs(ll n, ll k){
//     queue<pair< ll, int>> q;
//     set<ll> vis_set;

//     q.push({n,0});
//     vis_set.insert(n);

//     while(!q.empty()){
//         ll pile_size = q.front().first;
//         int time = q.front().second;
//         q.pop();

//         if(pile_size == k)
//             return time;

        
//         if(pile_size>1){
//             ll a = pile_size/2;
//             ll b = (pile_size+1)/2;

//             if(vis_set.find(a) == vis_set.end()){
//                 q.push({a,time+1});
//                 vis_set.insert(a);
//             }

//             if(vis_set.find(b) == vis_set.end()){
//                 q.push({b,time+1});
//                 vis_set.insert(b);
//             }
//         }
//     }

//     return -1; 
// }

// int main() {
//     fast_io;

//     int t;
//     cin>>t;
//     while(t--){
//         ll n,k;
//         cin>>n>>k;

//         if(k>n){
//             cout<< -1 << nl;
//             continue;
//         }

//         if(n==k){
//             cout<< 0 << nl;
//             continue;
//         }

//         int ans = bfs(n,k);
//         cout<< ans << nl;
//     }

//     return 0;
// }





// #include <bits/stdc++.h>
// // using namespace std;
// #include <bits/stdc++.h>
// using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        long long n, k;
        cin >> n >> k;
        
        if (k > n) {
            cout << -1 << "\n";
            continue;
        }
        
        int steps = 0;
        
        // k ke n porjonto barabo
        while (k < n) {
            k *= 2;
            steps++;
        }
        
        // check: k theke n e neme asha possible kina
        // repeatedly ceil(k/2) korbo
        while (k != n && k > 0) {
            if (k < n) {
                steps = -1;
                break;
            }
            k = (k + 1) / 2;
        }
        
        cout << steps << "\n";
    }
    
    return 0;
}