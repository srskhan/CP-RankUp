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

    int q;
    cin>>q;
    int customer_no = 1;
    set<pair<int,int>> s;
    multiset<pair<int,int>>ml;
    vector<int>ans;

    while(q--)
    {

        int type;
        cin>>type;

        if(type == 1){
            int amount;
            cin>>amount;
            s.insert({customer_no,amount});
            ml.insert({amount,-customer_no});
            customer_no++;
        }
        else if(type == 2){
            int pos = s.begin()->first, money = s.begin()->second;
            ans.push_back(pos);
            s.erase(s.begin());
            ml.erase({money,-pos});
        }
        else if(type == 3){
            int money = ml.rbegin()->first, pos = -ml.rbegin()->second;
            ans.push_back(pos);
            ml.erase(--ml.end());
            s.erase({pos,money});
        }

    } 
    
    for( auto val : ans){
        cout<<val<< " ";
    }
    cout<<nl;
    
    return 0;
}