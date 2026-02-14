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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<float> vec;
        while(n--){
            int d,t;
            cin>>d>>t;
            float spead = (float)d/t;
            vec.push_back(spead);
        }
        
        int idx = 0;
        for (int i = 1; i < vec.size(); i++) {
            if (vec[i] > vec[idx]) {
                idx = i;
            }
        }
        
        cout<< idx+1 << endl;
    }
}
