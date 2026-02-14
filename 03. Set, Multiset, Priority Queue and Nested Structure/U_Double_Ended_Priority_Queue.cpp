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
    multiset<int> ml;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ml.insert(x);
    }

    while(q--)
    {
        int type;
        cin>>type;

        if(type == 0){
            int x;
            cin>>x;
            ml.insert(x);
        }
        if(type == 1){
            if(!ml.empty()){
                cout<< *ml.begin() <<nl;
                ml.erase(ml.begin());
            }
        }
        if(type == 2){
            if(!ml.empty()){
                cout<< *ml.rbegin()<<nl;
                ml.erase(--ml.end());
            }
        }
    }

    return 0;
}