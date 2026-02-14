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

    int n,q;
    cin>>n>>q;
    vector<priority_queue<int>> pq(n);

    while(q--)
    {
        int type, t;
        cin>>type>>t;
        if(type == 0){
            int x;
            cin>>x;
            pq[t].push(x);
        }
        else if(type == 1){
            if(!pq[t].empty()){
                cout<<pq[t].top()<<endl;
            }
        }
        else if(type == 2){
            if(!pq[t].empty()){
                pq[t].pop();
            }
        }
    }

    return 0;
}