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
        int n,m;
        cin>>n>>m;
        vector<int>ar1(n);
        vector<int>ar2(m);

        for(int i=0;i<n;i++){
            cin>>ar1[i];
        }
        for(int i=0;i<m;i++){
            cin>>ar2[i];
        }

        int l = *max_element(ar2.begin(),ar2.end());
        int s= n-l; 

        sort(ar1.begin()+s,ar1.end());

        for(int a: ar1){
            cout<< a << " ";
        }
        cout<<nl;


    }

    return 0;
}