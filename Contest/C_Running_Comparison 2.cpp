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
        int cnt = 0;
        vector<int>ar1(n);
        vector<int>ar2(n);
        for(int i=0;i<n;i++){
            cin>>ar1[i];
        }
        for(int i=0;i<n;i++){
            cin>>ar2[i];
        }
        
        for(int i=0;i<n;i++){
            if(ar1[i]> 2* ar2[i] || ar2[i]> 2* ar1[i]){
                cnt++;
            }
        }

        cout<< n-cnt <<nl;
    }

    return 0;
}