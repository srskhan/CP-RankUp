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
        map<int,int> mp;
        priority_queue<int>pq;

        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            mp[x]++;
        }

        // for(auto [x,y]:mp){
        //     cout<< x << " " << y <<nl;
        // }

        for(auto [x,y]:mp){
            pq.push(y);
        }

        while(!pq.empty())
        {
            if(pq.size()<2){
                break;
            }
            int x,y;
            x = pq.top();
            pq.pop();
            y = pq.top();
            pq.pop();
            x--,y--;

            if(x>=1){
                pq.push(x);
            }
            if(y>=1){
                pq.push(y);
            }

        }

        int ans=0;

        while(!pq.empty()){
            ans += pq.top();
            pq.pop();
        }

        cout<< ans << nl;
    }

    return 0;
}