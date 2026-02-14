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
        vector<int> a(n);
        vector<int> b(n);

        int a_1_count = 0, b_1_count=0;

        for(int i=0;i<n;i++) {
            cin>> a[i];
            a_1_count += a[i];
        }
        for(int i=0;i<n;i++) {
            cin>> b[i];
            b_1_count += b[i];
        }

        if(a_1_count %2 == b_1_count % 2){
            cout<<"Tie"<<nl;
            continue;
        }

        int last = -1;

        for(int i=n-1;i>=0;i--){
            if(a[i] != b[i]){
                last = i+1;
                break;
            }
        }

        if(last %2 == 1){
            cout<< "Ajisai"<<nl;
        }
        else{
            cout<< "Mai" << nl;
        }
    }

    return 0;
}