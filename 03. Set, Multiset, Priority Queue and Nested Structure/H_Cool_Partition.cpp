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

        set<int> full_set;
        set<int> partisan_set;

        int cnt=0;

        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            full_set.insert(x);
            partisan_set.insert(x);

            if(full_set.size()== partisan_set.size()){
                cnt++;
                partisan_set.clear();
            }
        }
        cout<<cnt<<nl;
    }

    return 0;
}