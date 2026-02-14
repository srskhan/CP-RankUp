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
        priority_queue<int> pq;

        ll sum = 0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;

            if(x == 0){
                if(!pq.empty()){
                    sum+= pq.top();
                    pq.pop();
                }
            }
            else{
                pq.push(x);
            }
        }

        // while(!pq.empty()){
        //     int x = pq.top();
        //     pq.pop();
        //     sum += x;
        // }
        cout<< sum <<nl;
    }

    return 0;
}