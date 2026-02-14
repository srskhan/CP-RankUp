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

    int n,x;
    cin>>n>>x;
    vector<pair<int,int>>vec;
    for(int i=1;i<=n;i++){
        int z;
        cin>>z;
        vec.push_back({z,i});
    }

    sort(all(vec));

    for(int i=0,j=n-1;i<j;){
        if(vec[i].first + vec[j].first < x){
            i++;
        }
        else if(vec[i].first + vec[j].first >x){
            j--;
        }
        else{
            cout<< vec[i].second << " " << vec[j].second <<nl;
            return 0;
        }
    }
    cout<< "IMPOSSIBLE" <<nl;
    return 0;
}