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

    int x,n;
    cin>>x>>n;

    set<int> lights;
    multiset<int> distance;
    lights.insert(0);
    lights.insert(x);
    distance.insert(x);

    while(n--)
    {
        int p;
        cin>>p;
        auto it = lights.upper_bound(p);
        int right = *it;
        it--;
        int left = *it;
        distance.erase(distance.find(right-left));
        lights.insert(p);
        distance.insert(right-p);
        distance.insert(p-left);

        cout << *distance.rbegin()<<" ";
    }

    return 0;
}